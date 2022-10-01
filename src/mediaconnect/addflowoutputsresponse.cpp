// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addflowoutputsresponse.h"
#include "addflowoutputsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowOutputsResponse
 * \brief The AddFlowOutputsResponse class provides an interace for MediaConnect AddFlowOutputs responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowOutputs
 */

/*!
 * Constructs a AddFlowOutputsResponse object for \a reply to \a request, with parent \a parent.
 */
AddFlowOutputsResponse::AddFlowOutputsResponse(
        const AddFlowOutputsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new AddFlowOutputsResponsePrivate(this), parent)
{
    setRequest(new AddFlowOutputsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddFlowOutputsRequest * AddFlowOutputsResponse::request() const
{
    Q_D(const AddFlowOutputsResponse);
    return static_cast<const AddFlowOutputsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect AddFlowOutputs \a response.
 */
void AddFlowOutputsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddFlowOutputsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::AddFlowOutputsResponsePrivate
 * \brief The AddFlowOutputsResponsePrivate class provides private implementation for AddFlowOutputsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowOutputsResponsePrivate object with public implementation \a q.
 */
AddFlowOutputsResponsePrivate::AddFlowOutputsResponsePrivate(
    AddFlowOutputsResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect AddFlowOutputs response element from \a xml.
 */
void AddFlowOutputsResponsePrivate::parseAddFlowOutputsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddFlowOutputsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
