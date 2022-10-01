// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCONTACTLENSREQUEST_H
#define QTAWS_CONNECTCONTACTLENSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsconnectcontactlensglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ConnectContactLens {

class ConnectContactLensRequestPrivate;

class QTAWSCONNECTCONTACTLENS_EXPORT ConnectContactLensRequest : public QtAws::Core::AwsAbstractRequest {

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
    explicit ConnectContactLensRequest(ConnectContactLensRequestPrivate * const d);
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
