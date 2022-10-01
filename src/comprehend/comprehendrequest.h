// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPREHENDREQUEST_H
#define QTAWS_COMPREHENDREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscomprehendglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Comprehend {

class ComprehendRequestPrivate;

class QTAWSCOMPREHEND_EXPORT ComprehendRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Comprehend.
    enum Action {
        BatchDetectDominantLanguageAction,
        BatchDetectEntitiesAction,
        BatchDetectKeyPhrasesAction,
        BatchDetectSentimentAction,
        BatchDetectSyntaxAction,
        BatchDetectTargetedSentimentAction,
        ClassifyDocumentAction,
        ContainsPiiEntitiesAction,
        CreateDocumentClassifierAction,
        CreateEndpointAction,
        CreateEntityRecognizerAction,
        DeleteDocumentClassifierAction,
        DeleteEndpointAction,
        DeleteEntityRecognizerAction,
        DeleteResourcePolicyAction,
        DescribeDocumentClassificationJobAction,
        DescribeDocumentClassifierAction,
        DescribeDominantLanguageDetectionJobAction,
        DescribeEndpointAction,
        DescribeEntitiesDetectionJobAction,
        DescribeEntityRecognizerAction,
        DescribeEventsDetectionJobAction,
        DescribeKeyPhrasesDetectionJobAction,
        DescribePiiEntitiesDetectionJobAction,
        DescribeResourcePolicyAction,
        DescribeSentimentDetectionJobAction,
        DescribeTargetedSentimentDetectionJobAction,
        DescribeTopicsDetectionJobAction,
        DetectDominantLanguageAction,
        DetectEntitiesAction,
        DetectKeyPhrasesAction,
        DetectPiiEntitiesAction,
        DetectSentimentAction,
        DetectSyntaxAction,
        DetectTargetedSentimentAction,
        ImportModelAction,
        ListDocumentClassificationJobsAction,
        ListDocumentClassifierSummariesAction,
        ListDocumentClassifiersAction,
        ListDominantLanguageDetectionJobsAction,
        ListEndpointsAction,
        ListEntitiesDetectionJobsAction,
        ListEntityRecognizerSummariesAction,
        ListEntityRecognizersAction,
        ListEventsDetectionJobsAction,
        ListKeyPhrasesDetectionJobsAction,
        ListPiiEntitiesDetectionJobsAction,
        ListSentimentDetectionJobsAction,
        ListTagsForResourceAction,
        ListTargetedSentimentDetectionJobsAction,
        ListTopicsDetectionJobsAction,
        PutResourcePolicyAction,
        StartDocumentClassificationJobAction,
        StartDominantLanguageDetectionJobAction,
        StartEntitiesDetectionJobAction,
        StartEventsDetectionJobAction,
        StartKeyPhrasesDetectionJobAction,
        StartPiiEntitiesDetectionJobAction,
        StartSentimentDetectionJobAction,
        StartTargetedSentimentDetectionJobAction,
        StartTopicsDetectionJobAction,
        StopDominantLanguageDetectionJobAction,
        StopEntitiesDetectionJobAction,
        StopEventsDetectionJobAction,
        StopKeyPhrasesDetectionJobAction,
        StopPiiEntitiesDetectionJobAction,
        StopSentimentDetectionJobAction,
        StopTargetedSentimentDetectionJobAction,
        StopTrainingDocumentClassifierAction,
        StopTrainingEntityRecognizerAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateEndpointAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ComprehendRequest(const Action action);
    ComprehendRequest(const ComprehendRequest &other);
    ComprehendRequest &operator=(const ComprehendRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ComprehendRequest &other) const;


protected:
    /// @cond internal
    explicit ComprehendRequest(ComprehendRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ComprehendRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
