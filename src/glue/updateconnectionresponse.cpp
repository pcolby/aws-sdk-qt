// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconnectionresponse.h"
#include "updateconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateConnectionResponse
 * \brief The UpdateConnectionResponse class provides an interace for Glue UpdateConnection responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateConnection
 */

/*!
 * Constructs a UpdateConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConnectionResponse::UpdateConnectionResponse(
        const UpdateConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateConnectionResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConnectionRequest * UpdateConnectionResponse::request() const
{
    Q_D(const UpdateConnectionResponse);
    return static_cast<const UpdateConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateConnection \a response.
 */
void UpdateConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateConnectionResponsePrivate
 * \brief The UpdateConnectionResponsePrivate class provides private implementation for UpdateConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateConnectionResponsePrivate object with public implementation \a q.
 */
UpdateConnectionResponsePrivate::UpdateConnectionResponsePrivate(
    UpdateConnectionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateConnection response element from \a xml.
 */
void UpdateConnectionResponsePrivate::parseUpdateConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
