// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgroupsresponse.h"
#include "getgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetGroupsResponse
 * \brief The GetGroupsResponse class provides an interace for XRay GetGroups responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getGroups
 */

/*!
 * Constructs a GetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
GetGroupsResponse::GetGroupsResponse(
        const GetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new GetGroupsResponsePrivate(this), parent)
{
    setRequest(new GetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGroupsRequest * GetGroupsResponse::request() const
{
    Q_D(const GetGroupsResponse);
    return static_cast<const GetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay GetGroups \a response.
 */
void GetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::GetGroupsResponsePrivate
 * \brief The GetGroupsResponsePrivate class provides private implementation for GetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetGroupsResponsePrivate object with public implementation \a q.
 */
GetGroupsResponsePrivate::GetGroupsResponsePrivate(
    GetGroupsResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay GetGroups response element from \a xml.
 */
void GetGroupsResponsePrivate::parseGetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
