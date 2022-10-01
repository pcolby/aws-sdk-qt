// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listflowsresponse.h"
#include "listflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::ListFlowsResponse
 * \brief The ListFlowsResponse class provides an interace for MediaConnect ListFlows responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::listFlows
 */

/*!
 * Constructs a ListFlowsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFlowsResponse::ListFlowsResponse(
        const ListFlowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new ListFlowsResponsePrivate(this), parent)
{
    setRequest(new ListFlowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFlowsRequest * ListFlowsResponse::request() const
{
    Q_D(const ListFlowsResponse);
    return static_cast<const ListFlowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect ListFlows \a response.
 */
void ListFlowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFlowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::ListFlowsResponsePrivate
 * \brief The ListFlowsResponsePrivate class provides private implementation for ListFlowsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a ListFlowsResponsePrivate object with public implementation \a q.
 */
ListFlowsResponsePrivate::ListFlowsResponsePrivate(
    ListFlowsResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect ListFlows response element from \a xml.
 */
void ListFlowsResponsePrivate::parseListFlowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFlowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
