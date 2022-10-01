// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetriggerresponse.h"
#include "updatetriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateTriggerResponse
 * \brief The UpdateTriggerResponse class provides an interace for Glue UpdateTrigger responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateTrigger
 */

/*!
 * Constructs a UpdateTriggerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTriggerResponse::UpdateTriggerResponse(
        const UpdateTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateTriggerResponsePrivate(this), parent)
{
    setRequest(new UpdateTriggerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTriggerRequest * UpdateTriggerResponse::request() const
{
    Q_D(const UpdateTriggerResponse);
    return static_cast<const UpdateTriggerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateTrigger \a response.
 */
void UpdateTriggerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateTriggerResponsePrivate
 * \brief The UpdateTriggerResponsePrivate class provides private implementation for UpdateTriggerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateTriggerResponsePrivate object with public implementation \a q.
 */
UpdateTriggerResponsePrivate::UpdateTriggerResponsePrivate(
    UpdateTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateTrigger response element from \a xml.
 */
void UpdateTriggerResponsePrivate::parseUpdateTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTriggerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
