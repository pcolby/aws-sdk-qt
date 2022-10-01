// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPINTEGRATIONSREQUEST_H
#define QTAWS_APPINTEGRATIONSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsappintegrationsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AppIntegrations {

class AppIntegrationsRequestPrivate;

class QTAWSAPPINTEGRATIONS_EXPORT AppIntegrationsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AppIntegrations.
    enum Action {
        CreateDataIntegrationAction,
        CreateEventIntegrationAction,
        DeleteDataIntegrationAction,
        DeleteEventIntegrationAction,
        GetDataIntegrationAction,
        GetEventIntegrationAction,
        ListDataIntegrationAssociationsAction,
        ListDataIntegrationsAction,
        ListEventIntegrationAssociationsAction,
        ListEventIntegrationsAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDataIntegrationAction,
        UpdateEventIntegrationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AppIntegrationsRequest(const Action action);
    AppIntegrationsRequest(const AppIntegrationsRequest &other);
    AppIntegrationsRequest &operator=(const AppIntegrationsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AppIntegrationsRequest &other) const;


protected:
    /// @cond internal
    explicit AppIntegrationsRequest(AppIntegrationsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppIntegrationsRequest)

};

} // namespace AppIntegrations
} // namespace QtAws

#endif
