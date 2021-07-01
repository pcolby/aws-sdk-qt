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

#ifndef QTAWS_OUTPOSTSCLIENT_H
#define QTAWS_OUTPOSTSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsoutpostsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Outposts {

class OutpostsClientPrivate;
class CreateOutpostRequest;
class CreateOutpostResponse;
class DeleteOutpostRequest;
class DeleteOutpostResponse;
class DeleteSiteRequest;
class DeleteSiteResponse;
class GetOutpostRequest;
class GetOutpostResponse;
class GetOutpostInstanceTypesRequest;
class GetOutpostInstanceTypesResponse;
class ListOutpostsRequest;
class ListOutpostsResponse;
class ListSitesRequest;
class ListSitesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSOUTPOSTS_EXPORT OutpostsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    OutpostsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit OutpostsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateOutpostResponse * createOutpost(const CreateOutpostRequest &request);
    DeleteOutpostResponse * deleteOutpost(const DeleteOutpostRequest &request);
    DeleteSiteResponse * deleteSite(const DeleteSiteRequest &request);
    GetOutpostResponse * getOutpost(const GetOutpostRequest &request);
    GetOutpostInstanceTypesResponse * getOutpostInstanceTypes(const GetOutpostInstanceTypesRequest &request);
    ListOutpostsResponse * listOutposts(const ListOutpostsRequest &request);
    ListSitesResponse * listSites(const ListSitesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(OutpostsClient)
    Q_DISABLE_COPY(OutpostsClient)

};

} // namespace Outposts
} // namespace QtAws

#endif
