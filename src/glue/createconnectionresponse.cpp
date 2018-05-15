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

#include "createconnectionresponse.h"
#include "createconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateConnectionResponse
 * \brief The CreateConnectionResponse class provides an interace for Glue CreateConnection responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createConnection
 */

/*!
 * Constructs a CreateConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConnectionResponse::CreateConnectionResponse(
        const CreateConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateConnectionResponsePrivate(this), parent)
{
    setRequest(new CreateConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConnectionRequest * CreateConnectionResponse::request() const
{
    Q_D(const CreateConnectionResponse);
    return static_cast<const CreateConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateConnection \a response.
 */
void CreateConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateConnectionResponsePrivate
 * \brief The CreateConnectionResponsePrivate class provides private implementation for CreateConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateConnectionResponsePrivate object with public implementation \a q.
 */
CreateConnectionResponsePrivate::CreateConnectionResponsePrivate(
    CreateConnectionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateConnection response element from \a xml.
 */
void CreateConnectionResponsePrivate::parseCreateConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConnectionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
