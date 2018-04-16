/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getdocumentversionresponse.h"
#include "getdocumentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/*!
 * \class QtAws::WorkDocs::GetDocumentVersionResponse
 *
 * \brief The GetDocumentVersionResponse class provides an interace for WorkDocs GetDocumentVersion responses.
 *
 * \ingroup WorkDocs
 *
 *  The WorkDocs API is designed for the following use
 * 
 *  cases> <ul> <li>
 * 
 *  File Migration: File migration applications are supported for users who want to migrate their files from an on-premises
 *  or off-premises file system or service. Users can insert files into a user directory structure, as well as allow for
 *  basic metadata changes, such as modifications to the permissions of
 * 
 *  files> </li> <li>
 * 
 *  Security: Support security applications are supported for users who have additional security needs, such as antivirus or
 *  data loss prevention. The API actions, along with AWS CloudTrail, allow these applications to detect when changes occur
 *  in Amazon WorkDocs. Then, the application can take the necessary actions and replace the target file. If the target file
 *  violates the policy, the application can also choose to email the
 * 
 *  user> </li> <li>
 * 
 *  eDiscovery/Analytics: General administrative applications are supported, such as eDiscovery and analytics. These
 *  applications can choose to mimic or record the actions in an Amazon WorkDocs site, along with AWS CloudTrail, to
 *  replicate data for eDiscovery, backup, or analytical
 * 
 *  applications> </li> </ul>
 * 
 *  All Amazon WorkDocs API actions are Amazon authenticated and certificate-signed. They not only require the use of the
 *  AWS SDK, but also allow for the exclusive use of IAM users and roles to help facilitate access, trust, and permission
 *  policies. By creating a role and allowing an IAM user to access the Amazon WorkDocs site, the IAM user gains full
 *  administrative visibility into the entire Amazon WorkDocs site (or as set in the IAM policy). This includes, but is not
 *  limited to, the ability to modify file permissions and upload any file to any user. This allows developers to perform
 *  the three use cases above, as well as give users the ability to grant access on a selective basis using the IAM
 *
 * \sa WorkDocsClient::getDocumentVersion
 */

/*!
 * @brief  Constructs a new GetDocumentVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDocumentVersionResponse::GetDocumentVersionResponse(
        const GetDocumentVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new GetDocumentVersionResponsePrivate(this), parent)
{
    setRequest(new GetDocumentVersionRequest(request));
    setReply(reply);
}

const GetDocumentVersionRequest * GetDocumentVersionResponse::request() const
{
    Q_D(const GetDocumentVersionResponse);
    return static_cast<const GetDocumentVersionRequest *>(d->request);
}

/*!
 * @brief  Parse a WorkDocs GetDocumentVersion response.
 *
 * @param  response  Response to parse.
 */
void GetDocumentVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDocumentVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetDocumentVersionResponsePrivate
 *
 * \brief Private implementation for GetDocumentVersionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDocumentVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDocumentVersionResponse instance.
 */
GetDocumentVersionResponsePrivate::GetDocumentVersionResponsePrivate(
    GetDocumentVersionResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an WorkDocs GetDocumentVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDocumentVersionResponsePrivate::parseGetDocumentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentVersionResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
