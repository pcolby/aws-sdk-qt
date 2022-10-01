// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateflowoutputresponse.h"
#include "updateflowoutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowOutputResponse
 * \brief The UpdateFlowOutputResponse class provides an interace for MediaConnect UpdateFlowOutput responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlowOutput
 */

/*!
 * Constructs a UpdateFlowOutputResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFlowOutputResponse::UpdateFlowOutputResponse(
        const UpdateFlowOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new UpdateFlowOutputResponsePrivate(this), parent)
{
    setRequest(new UpdateFlowOutputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFlowOutputRequest * UpdateFlowOutputResponse::request() const
{
    Q_D(const UpdateFlowOutputResponse);
    return static_cast<const UpdateFlowOutputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect UpdateFlowOutput \a response.
 */
void UpdateFlowOutputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFlowOutputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowOutputResponsePrivate
 * \brief The UpdateFlowOutputResponsePrivate class provides private implementation for UpdateFlowOutputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowOutputResponsePrivate object with public implementation \a q.
 */
UpdateFlowOutputResponsePrivate::UpdateFlowOutputResponsePrivate(
    UpdateFlowOutputResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect UpdateFlowOutput response element from \a xml.
 */
void UpdateFlowOutputResponsePrivate::parseUpdateFlowOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFlowOutputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
