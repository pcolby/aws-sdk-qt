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

#include "listworldtemplatesresponse.h"
#include "listworldtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldTemplatesResponse
 * \brief The ListWorldTemplatesResponse class provides an interace for RoboMaker ListWorldTemplates responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorldTemplates
 */

/*!
 * Constructs a ListWorldTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorldTemplatesResponse::ListWorldTemplatesResponse(
        const ListWorldTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListWorldTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListWorldTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorldTemplatesRequest * ListWorldTemplatesResponse::request() const
{
    return static_cast<const ListWorldTemplatesRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListWorldTemplates \a response.
 */
void ListWorldTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorldTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListWorldTemplatesResponsePrivate
 * \brief The ListWorldTemplatesResponsePrivate class provides private implementation for ListWorldTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldTemplatesResponsePrivate object with public implementation \a q.
 */
ListWorldTemplatesResponsePrivate::ListWorldTemplatesResponsePrivate(
    ListWorldTemplatesResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListWorldTemplates response element from \a xml.
 */
void ListWorldTemplatesResponsePrivate::parseListWorldTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorldTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
