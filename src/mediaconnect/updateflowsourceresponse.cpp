// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateflowsourceresponse.h"
#include "updateflowsourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowSourceResponse
 * \brief The UpdateFlowSourceResponse class provides an interace for MediaConnect UpdateFlowSource responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlowSource
 */

/*!
 * Constructs a UpdateFlowSourceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFlowSourceResponse::UpdateFlowSourceResponse(
        const UpdateFlowSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new UpdateFlowSourceResponsePrivate(this), parent)
{
    setRequest(new UpdateFlowSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFlowSourceRequest * UpdateFlowSourceResponse::request() const
{
    Q_D(const UpdateFlowSourceResponse);
    return static_cast<const UpdateFlowSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect UpdateFlowSource \a response.
 */
void UpdateFlowSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFlowSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowSourceResponsePrivate
 * \brief The UpdateFlowSourceResponsePrivate class provides private implementation for UpdateFlowSourceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowSourceResponsePrivate object with public implementation \a q.
 */
UpdateFlowSourceResponsePrivate::UpdateFlowSourceResponsePrivate(
    UpdateFlowSourceResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect UpdateFlowSource response element from \a xml.
 */
void UpdateFlowSourceResponsePrivate::parseUpdateFlowSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFlowSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
