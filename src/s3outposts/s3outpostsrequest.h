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

#ifndef QTAWS_S3OUTPOSTSREQUEST_H
#define QTAWS_S3OUTPOSTSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawss3outpostsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace S3Outposts {

class S3OutpostsRequestPrivate;

class QTAWSS3OUTPOSTS_EXPORT S3OutpostsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by S3Outposts.
    enum Action {
        CreateEndpointAction,
        DeleteEndpointAction,
        ListEndpointsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    S3OutpostsRequest(const Action action);
    S3OutpostsRequest(const S3OutpostsRequest &other);
    S3OutpostsRequest &operator=(const S3OutpostsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const S3OutpostsRequest &other) const;


protected:
    /// @cond internal
    explicit S3OutpostsRequest(S3OutpostsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(S3OutpostsRequest)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
