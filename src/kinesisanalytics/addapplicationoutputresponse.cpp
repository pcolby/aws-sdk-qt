/*
    Copyright 2013-2018 Paul Colby

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

#include "addapplicationoutputresponse.h"
#include "addapplicationoutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationOutputResponse
 * \brief The AddApplicationOutputResponse class provides an interace for KinesisAnalytics AddApplicationOutput responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::addApplicationOutput
 */

/*!
 * Constructs a AddApplicationOutputResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationOutputResponse::AddApplicationOutputResponse(
        const AddApplicationOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationOutputResponsePrivate(this), parent)
{
    setRequest(new AddApplicationOutputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationOutputRequest * AddApplicationOutputResponse::request() const
{
    Q_D(const AddApplicationOutputResponse);
    return static_cast<const AddApplicationOutputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics AddApplicationOutput \a response.
 */
void AddApplicationOutputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationOutputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationOutputResponsePrivate
 * \brief The AddApplicationOutputResponsePrivate class provides private implementation for AddApplicationOutputResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationOutputResponsePrivate object with public implementation \a q.
 */
AddApplicationOutputResponsePrivate::AddApplicationOutputResponsePrivate(
    AddApplicationOutputResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics AddApplicationOutput response element from \a xml.
 */
void AddApplicationOutputResponsePrivate::parseAddApplicationOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationOutputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
