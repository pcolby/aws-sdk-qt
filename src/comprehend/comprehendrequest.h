/*
    Copyright 2013-2019 Paul Colby

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

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Comprehend {

class ComprehendRequestPrivate;

class QTAWS_EXPORT ComprehendRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Comprehend.
    enum Action {
        BatchDetectDominantLanguageAction,
        BatchDetectEntitiesAction,
        BatchDetectKeyPhrasesAction,
        BatchDetectSentimentAction,
        BatchDetectSyntaxAction,
        CreateDocumentClassifierAction,
        CreateEntityRecognizerAction,
        DeleteDocumentClassifierAction,
        DeleteEntityRecognizerAction,
        DescribeDocumentClassificationJobAction,
        DescribeDocumentClassifierAction,
        DescribeDominantLanguageDetectionJobAction,
        DescribeEntitiesDetectionJobAction,
        DescribeEntityRecognizerAction,
        DescribeKeyPhrasesDetectionJobAction,
        DescribeSentimentDetectionJobAction,
        DescribeTopicsDetectionJobAction,
        DetectDominantLanguageAction,
        DetectEntitiesAction,
        DetectKeyPhrasesAction,
        DetectSentimentAction,
        DetectSyntaxAction,
        ListDocumentClassificationJobsAction,
        ListDocumentClassifiersAction,
        ListDominantLanguageDetectionJobsAction,
        ListEntitiesDetectionJobsAction,
        ListEntityRecognizersAction,
        ListKeyPhrasesDetectionJobsAction,
        ListSentimentDetectionJobsAction,
        ListTagsForResourceAction,
        ListTopicsDetectionJobsAction,
        StartDocumentClassificationJobAction,
        StartDominantLanguageDetectionJobAction,
        StartEntitiesDetectionJobAction,
        StartKeyPhrasesDetectionJobAction,
        StartSentimentDetectionJobAction,
        StartTopicsDetectionJobAction,
        StopDominantLanguageDetectionJobAction,
        StopEntitiesDetectionJobAction,
        StopKeyPhrasesDetectionJobAction,
        StopSentimentDetectionJobAction,
        StopTrainingDocumentClassifierAction,
        StopTrainingEntityRecognizerAction,
        TagResourceAction,
        UntagResourceAction,
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
    ComprehendRequest(ComprehendRequestPrivate * const d);
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
