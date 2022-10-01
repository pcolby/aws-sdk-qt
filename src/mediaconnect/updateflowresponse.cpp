// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateflowresponse.h"
#include "updateflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowResponse
 * \brief The UpdateFlowResponse class provides an interace for MediaConnect UpdateFlow responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlow
 */

/*!
 * Constructs a UpdateFlowResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFlowResponse::UpdateFlowResponse(
        const UpdateFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new UpdateFlowResponsePrivate(this), parent)
{
    setRequest(new UpdateFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFlowRequest * UpdateFlowResponse::request() const
{
    Q_D(const UpdateFlowResponse);
    return static_cast<const UpdateFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect UpdateFlow \a response.
 */
void UpdateFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowResponsePrivate
 * \brief The UpdateFlowResponsePrivate class provides private implementation for UpdateFlowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowResponsePrivate object with public implementation \a q.
 */
UpdateFlowResponsePrivate::UpdateFlowResponsePrivate(
    UpdateFlowResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect UpdateFlow response element from \a xml.
 */
void UpdateFlowResponsePrivate::parseUpdateFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
