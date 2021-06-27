/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CONNECTCONTACTLENSREQUEST_H
#define QTAWS_CONNECTCONTACTLENSREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ConnectContactLens {

class ConnectContactLensRequestPrivate;

class QTAWS_EXPORT ConnectContactLensRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ConnectContactLens.
    enum Action {
        ListRealtimeContactAnalysisSegmentsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ConnectContactLensRequest(const Action action);
    ConnectContactLensRequest(const ConnectContactLensRequest &other);
    ConnectContactLensRequest &operator=(const ConnectContactLensRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ConnectContactLensRequest &other) const;


protected:
    /// @cond internal
    ConnectContactLensRequestPrivate * const d_ptr; ///< Internal d-pointer.
    ConnectContactLensRequest(ConnectContactLensRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectContactLensRequest)

};

} // namespace ConnectContactLens
} // namespace QtAws

#endif
