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
