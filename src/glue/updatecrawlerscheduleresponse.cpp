// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecrawlerscheduleresponse.h"
#include "updatecrawlerscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateCrawlerScheduleResponse
 * \brief The UpdateCrawlerScheduleResponse class provides an interace for Glue UpdateCrawlerSchedule responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateCrawlerSchedule
 */

/*!
 * Constructs a UpdateCrawlerScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCrawlerScheduleResponse::UpdateCrawlerScheduleResponse(
        const UpdateCrawlerScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateCrawlerScheduleResponsePrivate(this), parent)
{
    setRequest(new UpdateCrawlerScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCrawlerScheduleRequest * UpdateCrawlerScheduleResponse::request() const
{
    Q_D(const UpdateCrawlerScheduleResponse);
    return static_cast<const UpdateCrawlerScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateCrawlerSchedule \a response.
 */
void UpdateCrawlerScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCrawlerScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateCrawlerScheduleResponsePrivate
 * \brief The UpdateCrawlerScheduleResponsePrivate class provides private implementation for UpdateCrawlerScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateCrawlerScheduleResponsePrivate object with public implementation \a q.
 */
UpdateCrawlerScheduleResponsePrivate::UpdateCrawlerScheduleResponsePrivate(
    UpdateCrawlerScheduleResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateCrawlerSchedule response element from \a xml.
 */
void UpdateCrawlerScheduleResponsePrivate::parseUpdateCrawlerScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCrawlerScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
