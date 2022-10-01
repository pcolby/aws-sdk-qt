// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCHEMASREQUEST_H
#define QTAWS_SCHEMASREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsschemasglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Schemas {

class SchemasRequestPrivate;

class QTAWSSCHEMAS_EXPORT SchemasRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Schemas.
    enum Action {
        CreateDiscovererAction,
        CreateRegistryAction,
        CreateSchemaAction,
        DeleteDiscovererAction,
        DeleteRegistryAction,
        DeleteResourcePolicyAction,
        DeleteSchemaAction,
        DeleteSchemaVersionAction,
        DescribeCodeBindingAction,
        DescribeDiscovererAction,
        DescribeRegistryAction,
        DescribeSchemaAction,
        ExportSchemaAction,
        GetCodeBindingSourceAction,
        GetDiscoveredSchemaAction,
        GetResourcePolicyAction,
        ListDiscoverersAction,
        ListRegistriesAction,
        ListSchemaVersionsAction,
        ListSchemasAction,
        ListTagsForResourceAction,
        PutCodeBindingAction,
        PutResourcePolicyAction,
        SearchSchemasAction,
        StartDiscovererAction,
        StopDiscovererAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDiscovererAction,
        UpdateRegistryAction,
        UpdateSchemaAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SchemasRequest(const Action action);
    SchemasRequest(const SchemasRequest &other);
    SchemasRequest &operator=(const SchemasRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SchemasRequest &other) const;


protected:
    /// @cond internal
    explicit SchemasRequest(SchemasRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SchemasRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
