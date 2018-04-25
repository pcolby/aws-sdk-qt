/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_REKOGNITIONREQUEST_H
#define QTAWS_REKOGNITIONREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Rekognition {

class RekognitionRequestPrivate;

class QTAWS_EXPORT RekognitionRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Rekognition.
    enum Action {
        CompareFacesAction,
        CreateCollectionAction,
        CreateStreamProcessorAction,
        DeleteCollectionAction,
        DeleteFacesAction,
        DeleteStreamProcessorAction,
        DescribeStreamProcessorAction,
        DetectFacesAction,
        DetectLabelsAction,
        DetectModerationLabelsAction,
        DetectTextAction,
        GetCelebrityInfoAction,
        GetCelebrityRecognitionAction,
        GetContentModerationAction,
        GetFaceDetectionAction,
        GetFaceSearchAction,
        GetLabelDetectionAction,
        GetPersonTrackingAction,
        IndexFacesAction,
        ListCollectionsAction,
        ListFacesAction,
        ListStreamProcessorsAction,
        RecognizeCelebritiesAction,
        SearchFacesAction,
        SearchFacesByImageAction,
        StartCelebrityRecognitionAction,
        StartContentModerationAction,
        StartFaceDetectionAction,
        StartFaceSearchAction,
        StartLabelDetectionAction,
        StartPersonTrackingAction,
        StartStreamProcessorAction,
        StopStreamProcessorAction,
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
    RekognitionRequest(RekognitionRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(RekognitionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
