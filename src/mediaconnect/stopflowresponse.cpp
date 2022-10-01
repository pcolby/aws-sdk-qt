// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopflowresponse.h"
#include "stopflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::StopFlowResponse
 * \brief The StopFlowResponse class provides an interace for MediaConnect StopFlow responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::stopFlow
 */

/*!
 * Constructs a StopFlowResponse object for \a reply to \a request, with parent \a parent.
 */
StopFlowResponse::StopFlowResponse(
        const StopFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new StopFlowResponsePrivate(this), parent)
{
    setRequest(new StopFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopFlowRequest * StopFlowResponse::request() const
{
    Q_D(const StopFlowResponse);
    return static_cast<const StopFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect StopFlow \a response.
 */
void StopFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::StopFlowResponsePrivate
 * \brief The StopFlowResponsePrivate class provides private implementation for StopFlowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a StopFlowResponsePrivate object with public implementation \a q.
 */
StopFlowResponsePrivate::StopFlowResponsePrivate(
    StopFlowResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect StopFlow response element from \a xml.
 */
void StopFlowResponsePrivate::parseStopFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
