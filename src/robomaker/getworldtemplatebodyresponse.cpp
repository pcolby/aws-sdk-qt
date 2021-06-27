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

#include "getworldtemplatebodyresponse.h"
#include "getworldtemplatebodyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::GetWorldTemplateBodyResponse
 * \brief The GetWorldTemplateBodyResponse class provides an interace for RoboMaker GetWorldTemplateBody responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::getWorldTemplateBody
 */

/*!
 * Constructs a GetWorldTemplateBodyResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorldTemplateBodyResponse::GetWorldTemplateBodyResponse(
        const GetWorldTemplateBodyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new GetWorldTemplateBodyResponsePrivate(this), parent)
{
    setRequest(new GetWorldTemplateBodyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorldTemplateBodyRequest * GetWorldTemplateBodyResponse::request() const
{
    return static_cast<const GetWorldTemplateBodyRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker GetWorldTemplateBody \a response.
 */
void GetWorldTemplateBodyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorldTemplateBodyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::GetWorldTemplateBodyResponsePrivate
 * \brief The GetWorldTemplateBodyResponsePrivate class provides private implementation for GetWorldTemplateBodyResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a GetWorldTemplateBodyResponsePrivate object with public implementation \a q.
 */
GetWorldTemplateBodyResponsePrivate::GetWorldTemplateBodyResponsePrivate(
    GetWorldTemplateBodyResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker GetWorldTemplateBody response element from \a xml.
 */
void GetWorldTemplateBodyResponsePrivate::parseGetWorldTemplateBodyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorldTemplateBodyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
