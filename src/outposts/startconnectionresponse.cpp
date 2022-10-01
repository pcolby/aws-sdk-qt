// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startconnectionresponse.h"
#include "startconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::StartConnectionResponse
 * \brief The StartConnectionResponse class provides an interace for Outposts StartConnection responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::startConnection
 */

/*!
 * Constructs a StartConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
StartConnectionResponse::StartConnectionResponse(
        const StartConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new StartConnectionResponsePrivate(this), parent)
{
    setRequest(new StartConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartConnectionRequest * StartConnectionResponse::request() const
{
    Q_D(const StartConnectionResponse);
    return static_cast<const StartConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts StartConnection \a response.
 */
void StartConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::StartConnectionResponsePrivate
 * \brief The StartConnectionResponsePrivate class provides private implementation for StartConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a StartConnectionResponsePrivate object with public implementation \a q.
 */
StartConnectionResponsePrivate::StartConnectionResponsePrivate(
    StartConnectionResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts StartConnection response element from \a xml.
 */
void StartConnectionResponsePrivate::parseStartConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
