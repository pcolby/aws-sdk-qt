// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmfadevicetagsresponse.h"
#include "listmfadevicetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListMFADeviceTagsResponse
 * \brief The ListMFADeviceTagsResponse class provides an interace for Iam ListMFADeviceTags responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
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
    Q_D(const ListMFADeviceTagsResponse);
    return static_cast<const ListMFADeviceTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListMFADeviceTags \a response.
 */
void ListMFADeviceTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMFADeviceTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListMFADeviceTagsResponsePrivate
 * \brief The ListMFADeviceTagsResponsePrivate class provides private implementation for ListMFADeviceTagsResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListMFADeviceTagsResponsePrivate object with public implementation \a q.
 */
ListMFADeviceTagsResponsePrivate::ListMFADeviceTagsResponsePrivate(
    ListMFADeviceTagsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListMFADeviceTags response element from \a xml.
 */
void ListMFADeviceTagsResponsePrivate::parseListMFADeviceTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMFADeviceTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
