// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addflowsourcesresponse.h"
#include "addflowsourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowSourcesResponse
 * \brief The AddFlowSourcesResponse class provides an interace for MediaConnect AddFlowSources responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowSources
 */

/*!
 * Constructs a AddFlowSourcesResponse object for \a reply to \a request, with parent \a parent.
 */
AddFlowSourcesResponse::AddFlowSourcesResponse(
        const AddFlowSourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new AddFlowSourcesResponsePrivate(this), parent)
{
    setRequest(new AddFlowSourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddFlowSourcesRequest * AddFlowSourcesResponse::request() const
{
    Q_D(const AddFlowSourcesResponse);
    return static_cast<const AddFlowSourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect AddFlowSources \a response.
 */
void AddFlowSourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddFlowSourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::AddFlowSourcesResponsePrivate
 * \brief The AddFlowSourcesResponsePrivate class provides private implementation for AddFlowSourcesResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowSourcesResponsePrivate object with public implementation \a q.
 */
AddFlowSourcesResponsePrivate::AddFlowSourcesResponsePrivate(
    AddFlowSourcesResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect AddFlowSources response element from \a xml.
 */
void AddFlowSourcesResponsePrivate::parseAddFlowSourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddFlowSourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
