// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectionresponse.h"
#include "getconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetConnectionResponse
 * \brief The GetConnectionResponse class provides an interace for Outposts GetConnection responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::getConnection
 */

/*!
 * Constructs a GetConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectionResponse::GetConnectionResponse(
        const GetConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new GetConnectionResponsePrivate(this), parent)
{
    setRequest(new GetConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectionRequest * GetConnectionResponse::request() const
{
    Q_D(const GetConnectionResponse);
    return static_cast<const GetConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts GetConnection \a response.
 */
void GetConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::GetConnectionResponsePrivate
 * \brief The GetConnectionResponsePrivate class provides private implementation for GetConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetConnectionResponsePrivate object with public implementation \a q.
 */
GetConnectionResponsePrivate::GetConnectionResponsePrivate(
    GetConnectionResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts GetConnection response element from \a xml.
 */
void GetConnectionResponsePrivate::parseGetConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
