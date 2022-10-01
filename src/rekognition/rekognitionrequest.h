// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REKOGNITIONREQUEST_H
#define QTAWS_REKOGNITIONREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsrekognitionglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Rekognition {

class RekognitionRequestPrivate;

class QTAWSREKOGNITION_EXPORT RekognitionRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Rekognition.
    enum Action {
        CompareFacesAction,
        CopyProjectVersionAction,
        CreateCollectionAction,
        CreateDatasetAction,
        CreateProjectAction,
        CreateProjectVersionAction,
        CreateStreamProcessorAction,
        DeleteCollectionAction,
        DeleteDatasetAction,
        DeleteFacesAction,
        DeleteProjectAction,
        DeleteProjectPolicyAction,
        DeleteProjectVersionAction,
        DeleteStreamProcessorAction,
        DescribeCollectionAction,
        DescribeDatasetAction,
        DescribeProjectVersionsAction,
        DescribeProjectsAction,
        DescribeStreamProcessorAction,
        DetectCustomLabelsAction,
        DetectFacesAction,
        DetectLabelsAction,
        DetectModerationLabelsAction,
        DetectProtectiveEquipmentAction,
        DetectTextAction,
        DistributeDatasetEntriesAction,
        GetCelebrityInfoAction,
        GetCelebrityRecognitionAction,
        GetContentModerationAction,
        GetFaceDetectionAction,
        GetFaceSearchAction,
        GetLabelDetectionAction,
        GetPersonTrackingAction,
        GetSegmentDetectionAction,
        GetTextDetectionAction,
        IndexFacesAction,
        ListCollectionsAction,
        ListDatasetEntriesAction,
        ListDatasetLabelsAction,
        ListFacesAction,
        ListProjectPoliciesAction,
        ListStreamProcessorsAction,
        ListTagsForResourceAction,
        PutProjectPolicyAction,
        RecognizeCelebritiesAction,
        SearchFacesAction,
        SearchFacesByImageAction,
        StartCelebrityRecognitionAction,
        StartContentModerationAction,
        StartFaceDetectionAction,
        StartFaceSearchAction,
        StartLabelDetectionAction,
        StartPersonTrackingAction,
        StartProjectVersionAction,
        StartSegmentDetectionAction,
        StartStreamProcessorAction,
        StartTextDetectionAction,
        StopProjectVersionAction,
        StopStreamProcessorAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDatasetEntriesAction,
        UpdateStreamProcessorAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    RekognitionRequest(const Action action);
    RekognitionRequest(const RekognitionRequest &other);
    RekognitionRequest &operator=(const RekognitionRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const RekognitionRequest &other) const;


protected:
    /// @cond internal
    explicit RekognitionRequest(RekognitionRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RekognitionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
