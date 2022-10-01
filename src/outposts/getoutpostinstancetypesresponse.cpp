// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoutpostinstancetypesresponse.h"
#include "getoutpostinstancetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetOutpostInstanceTypesResponse
 * \brief The GetOutpostInstanceTypesResponse class provides an interace for Outposts GetOutpostInstanceTypes responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::getOutpostInstanceTypes
 */

/*!
 * Constructs a GetOutpostInstanceTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetOutpostInstanceTypesResponse::GetOutpostInstanceTypesResponse(
        const GetOutpostInstanceTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new GetOutpostInstanceTypesResponsePrivate(this), parent)
{
    setRequest(new GetOutpostInstanceTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOutpostInstanceTypesRequest * GetOutpostInstanceTypesResponse::request() const
{
    Q_D(const GetOutpostInstanceTypesResponse);
    return static_cast<const GetOutpostInstanceTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts GetOutpostInstanceTypes \a response.
 */
void GetOutpostInstanceTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOutpostInstanceTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::GetOutpostInstanceTypesResponsePrivate
 * \brief The GetOutpostInstanceTypesResponsePrivate class provides private implementation for GetOutpostInstanceTypesResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetOutpostInstanceTypesResponsePrivate object with public implementation \a q.
 */
GetOutpostInstanceTypesResponsePrivate::GetOutpostInstanceTypesResponsePrivate(
    GetOutpostInstanceTypesResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts GetOutpostInstanceTypes response element from \a xml.
 */
void GetOutpostInstanceTypesResponsePrivate::parseGetOutpostInstanceTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOutpostInstanceTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
