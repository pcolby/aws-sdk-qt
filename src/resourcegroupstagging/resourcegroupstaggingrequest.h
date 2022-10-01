// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOURCEGROUPSTAGGINGREQUEST_H
#define QTAWS_RESOURCEGROUPSTAGGINGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsresourcegroupstaggingglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ResourceGroupsTagging {

class ResourceGroupsTaggingRequestPrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT ResourceGroupsTaggingRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ResourceGroupsTagging.
    enum Action {
        DescribeReportCreationAction,
        GetComplianceSummaryAction,
        GetResourcesAction,
        GetTagKeysAction,
        GetTagValuesAction,
        StartReportCreationAction,
        TagResourcesAction,
        UntagResourcesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ResourceGroupsTaggingRequest(const Action action);
    ResourceGroupsTaggingRequest(const ResourceGroupsTaggingRequest &other);
    ResourceGroupsTaggingRequest &operator=(const ResourceGroupsTaggingRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ResourceGroupsTaggingRequest &other) const;


protected:
    /// @cond internal
    explicit ResourceGroupsTaggingRequest(ResourceGroupsTaggingRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResourceGroupsTaggingRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
