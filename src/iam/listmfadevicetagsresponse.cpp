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

#include "listmfadevicetagsresponse.h"
#include "listmfadevicetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::ListMFADeviceTagsResponse
 * \brief The ListMFADeviceTagsResponse class provides an interace for IAM ListMFADeviceTags responses.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 *
 * \sa IamClient::listMFADeviceTags
 */

/*!
 * Constructs a ListMFADeviceTagsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMFADeviceTagsResponse::ListMFADeviceTagsResponse(
        const ListMFADeviceTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListMFADeviceTagsResponsePrivate(this), parent)
{
    setRequest(new ListMFADeviceTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMFADeviceTagsRequest * ListMFADeviceTagsResponse::request() const
{
    return static_cast<const ListMFADeviceTagsRequest *>(IamResponse::request());
}

/*!
 * \reimp
 * Parses a successful IAM ListMFADeviceTags \a response.
 */
void ListMFADeviceTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMFADeviceTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::ListMFADeviceTagsResponsePrivate
 * \brief The ListMFADeviceTagsResponsePrivate class provides private implementation for ListMFADeviceTagsResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a ListMFADeviceTagsResponsePrivate object with public implementation \a q.
 */
ListMFADeviceTagsResponsePrivate::ListMFADeviceTagsResponsePrivate(
    ListMFADeviceTagsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM ListMFADeviceTags response element from \a xml.
 */
void ListMFADeviceTagsResponsePrivate::parseListMFADeviceTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMFADeviceTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
