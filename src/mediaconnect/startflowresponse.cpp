// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startflowresponse.h"
#include "startflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::StartFlowResponse
 * \brief The StartFlowResponse class provides an interace for MediaConnect StartFlow responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::startFlow
 */

/*!
 * Constructs a StartFlowResponse object for \a reply to \a request, with parent \a parent.
 */
StartFlowResponse::StartFlowResponse(
        const StartFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new StartFlowResponsePrivate(this), parent)
{
    setRequest(new StartFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartFlowRequest * StartFlowResponse::request() const
{
    Q_D(const StartFlowResponse);
    return static_cast<const StartFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect StartFlow \a response.
 */
void StartFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::StartFlowResponsePrivate
 * \brief The StartFlowResponsePrivate class provides private implementation for StartFlowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a StartFlowResponsePrivate object with public implementation \a q.
 */
StartFlowResponsePrivate::StartFlowResponsePrivate(
    StartFlowResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect StartFlow response element from \a xml.
 */
void StartFlowResponsePrivate::parseStartFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
