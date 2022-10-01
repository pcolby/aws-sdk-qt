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

#include "createextendedsourceserverresponse.h"
#include "createextendedsourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::CreateExtendedSourceServerResponse
 * \brief The CreateExtendedSourceServerResponse class provides an interace for Drs CreateExtendedSourceServer responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::createExtendedSourceServer
 */

/*!
 * Constructs a CreateExtendedSourceServerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExtendedSourceServerResponse::CreateExtendedSourceServerResponse(
        const CreateExtendedSourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new CreateExtendedSourceServerResponsePrivate(this), parent)
{
    setRequest(new CreateExtendedSourceServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExtendedSourceServerRequest * CreateExtendedSourceServerResponse::request() const
{
    Q_D(const CreateExtendedSourceServerResponse);
    return static_cast<const CreateExtendedSourceServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs CreateExtendedSourceServer \a response.
 */
void CreateExtendedSourceServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExtendedSourceServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::CreateExtendedSourceServerResponsePrivate
 * \brief The CreateExtendedSourceServerResponsePrivate class provides private implementation for CreateExtendedSourceServerResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a CreateExtendedSourceServerResponsePrivate object with public implementation \a q.
 */
CreateExtendedSourceServerResponsePrivate::CreateExtendedSourceServerResponsePrivate(
    CreateExtendedSourceServerResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs CreateExtendedSourceServer response element from \a xml.
 */
void CreateExtendedSourceServerResponsePrivate::parseCreateExtendedSourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExtendedSourceServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
