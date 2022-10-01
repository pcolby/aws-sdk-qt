// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resumeresourceresponse.h"
#include "resumeresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ResumeResourceResponse
 * \brief The ResumeResourceResponse class provides an interace for Forecast ResumeResource responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::resumeResource
 */

/*!
 * Constructs a ResumeResourceResponse object for \a reply to \a request, with parent \a parent.
 */
ResumeResourceResponse::ResumeResourceResponse(
        const ResumeResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ResumeResourceResponsePrivate(this), parent)
{
    setRequest(new ResumeResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResumeResourceRequest * ResumeResourceResponse::request() const
{
    Q_D(const ResumeResourceResponse);
    return static_cast<const ResumeResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ResumeResource \a response.
 */
void ResumeResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResumeResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ResumeResourceResponsePrivate
 * \brief The ResumeResourceResponsePrivate class provides private implementation for ResumeResourceResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ResumeResourceResponsePrivate object with public implementation \a q.
 */
ResumeResourceResponsePrivate::ResumeResourceResponsePrivate(
    ResumeResourceResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ResumeResource response element from \a xml.
 */
void ResumeResourceResponsePrivate::parseResumeResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResumeResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
