// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDCONTROLREQUEST_H
#define QTAWS_CLOUDCONTROLREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudcontrolglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudControl {

class CloudControlRequestPrivate;

class QTAWSCLOUDCONTROL_EXPORT CloudControlRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudControl.
    enum Action {
        CancelResourceRequestAction,
        CreateResourceAction,
        DeleteResourceAction,
        GetResourceAction,
        GetResourceRequestStatusAction,
        ListResourceRequestsAction,
        ListResourcesAction,
        UpdateResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudControlRequest(const Action action);
    CloudControlRequest(const CloudControlRequest &other);
    CloudControlRequest &operator=(const CloudControlRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudControlRequest &other) const;


protected:
    /// @cond internal
    explicit CloudControlRequest(CloudControlRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudControlRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif
