/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_MEDIATAILORCLIENT_H
#define QTAWS_MEDIATAILORCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace MediaTailor {

class MediaTailorClientPrivate;
class DeletePlaybackConfigurationRequest;
class DeletePlaybackConfigurationResponse;
class GetPlaybackConfigurationRequest;
class GetPlaybackConfigurationResponse;
class ListPlaybackConfigurationsRequest;
class ListPlaybackConfigurationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutPlaybackConfigurationRequest;
class PutPlaybackConfigurationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWS_EXPORT MediaTailorClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaTailorClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaTailorClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeletePlaybackConfigurationResponse * deletePlaybackConfiguration(const DeletePlaybackConfigurationRequest &request);
    GetPlaybackConfigurationResponse * getPlaybackConfiguration(const GetPlaybackConfigurationRequest &request);
    ListPlaybackConfigurationsResponse * listPlaybackConfigurations(const ListPlaybackConfigurationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutPlaybackConfigurationResponse * putPlaybackConfiguration(const PutPlaybackConfigurationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaTailorClient)
    Q_DISABLE_COPY(MediaTailorClient)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
