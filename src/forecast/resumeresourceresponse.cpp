/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
