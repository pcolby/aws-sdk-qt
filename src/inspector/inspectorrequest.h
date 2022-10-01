// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSPECTORREQUEST_H
#define QTAWS_INSPECTORREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsinspectorglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Inspector {

class InspectorRequestPrivate;

class QTAWSINSPECTOR_EXPORT InspectorRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Inspector.
    enum Action {
        AddAttributesToFindingsAction,
        CreateAssessmentTargetAction,
        CreateAssessmentTemplateAction,
        CreateExclusionsPreviewAction,
        CreateResourceGroupAction,
        DeleteAssessmentRunAction,
        DeleteAssessmentTargetAction,
        DeleteAssessmentTemplateAction,
        DescribeAssessmentRunsAction,
        DescribeAssessmentTargetsAction,
        DescribeAssessmentTemplatesAction,
        DescribeCrossAccountAccessRoleAction,
        DescribeExclusionsAction,
        DescribeFindingsAction,
        DescribeResourceGroupsAction,
        DescribeRulesPackagesAction,
        GetAssessmentReportAction,
        GetExclusionsPreviewAction,
        GetTelemetryMetadataAction,
        ListAssessmentRunAgentsAction,
        ListAssessmentRunsAction,
        ListAssessmentTargetsAction,
        ListAssessmentTemplatesAction,
        ListEventSubscriptionsAction,
        ListExclusionsAction,
        ListFindingsAction,
        ListRulesPackagesAction,
        ListTagsForResourceAction,
        PreviewAgentsAction,
        RegisterCrossAccountAccessRoleAction,
        RemoveAttributesFromFindingsAction,
        SetTagsForResourceAction,
        StartAssessmentRunAction,
        StopAssessmentRunAction,
        SubscribeToEventAction,
        UnsubscribeFromEventAction,
        UpdateAssessmentTargetAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    InspectorRequest(const Action action);
    InspectorRequest(const InspectorRequest &other);
    InspectorRequest &operator=(const InspectorRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const InspectorRequest &other) const;


protected:
    /// @cond internal
    explicit InspectorRequest(InspectorRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InspectorRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
