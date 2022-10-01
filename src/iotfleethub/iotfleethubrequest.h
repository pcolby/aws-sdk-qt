// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTFLEETHUBREQUEST_H
#define QTAWS_IOTFLEETHUBREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiotfleethubglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoTFleetHub {

class IoTFleetHubRequestPrivate;

class QTAWSIOTFLEETHUB_EXPORT IoTFleetHubRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoTFleetHub.
    enum Action {
        CreateApplicationAction,
        DeleteApplicationAction,
        DescribeApplicationAction,
        ListApplicationsAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApplicationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoTFleetHubRequest(const Action action);
    IoTFleetHubRequest(const IoTFleetHubRequest &other);
    IoTFleetHubRequest &operator=(const IoTFleetHubRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoTFleetHubRequest &other) const;


protected:
    /// @cond internal
    explicit IoTFleetHubRequest(IoTFleetHubRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTFleetHubRequest)

};

} // namespace IoTFleetHub
} // namespace QtAws

#endif
