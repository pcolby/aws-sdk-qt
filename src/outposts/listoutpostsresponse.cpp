// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listoutpostsresponse.h"
#include "listoutpostsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::ListOutpostsResponse
 * \brief The ListOutpostsResponse class provides an interace for Outposts ListOutposts responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::listOutposts
 */

/*!
 * Constructs a ListOutpostsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOutpostsResponse::ListOutpostsResponse(
        const ListOutpostsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new ListOutpostsResponsePrivate(this), parent)
{
    setRequest(new ListOutpostsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOutpostsRequest * ListOutpostsResponse::request() const
{
    Q_D(const ListOutpostsResponse);
    return static_cast<const ListOutpostsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts ListOutposts \a response.
 */
void ListOutpostsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOutpostsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::ListOutpostsResponsePrivate
 * \brief The ListOutpostsResponsePrivate class provides private implementation for ListOutpostsResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a ListOutpostsResponsePrivate object with public implementation \a q.
 */
ListOutpostsResponsePrivate::ListOutpostsResponsePrivate(
    ListOutpostsResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts ListOutposts response element from \a xml.
 */
void ListOutpostsResponsePrivate::parseListOutpostsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOutpostsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
