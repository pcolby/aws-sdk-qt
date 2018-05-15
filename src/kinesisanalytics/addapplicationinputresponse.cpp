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

#include "addapplicationinputresponse.h"
#include "addapplicationinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputResponse
 * \brief The AddApplicationInputResponse class provides an interace for KinesisAnalytics AddApplicationInput responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::addApplicationInput
 */

/*!
 * Constructs a AddApplicationInputResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationInputResponse::AddApplicationInputResponse(
        const AddApplicationInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationInputResponsePrivate(this), parent)
{
    setRequest(new AddApplicationInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationInputRequest * AddApplicationInputResponse::request() const
{
    Q_D(const AddApplicationInputResponse);
    return static_cast<const AddApplicationInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics AddApplicationInput \a response.
 */
void AddApplicationInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputResponsePrivate
 * \brief The AddApplicationInputResponsePrivate class provides private implementation for AddApplicationInputResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationInputResponsePrivate object with public implementation \a q.
 */
AddApplicationInputResponsePrivate::AddApplicationInputResponsePrivate(
    AddApplicationInputResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics AddApplicationInput response element from \a xml.
 */
void AddApplicationInputResponsePrivate::parseAddApplicationInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationInputResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
