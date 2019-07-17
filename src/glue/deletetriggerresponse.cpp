/*
    Copyright 2013-2019 Paul Colby

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

#include "deletetriggerresponse.h"
#include "deletetriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteTriggerResponse
 * \brief The DeleteTriggerResponse class provides an interace for Glue DeleteTrigger responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteTrigger
 */

/*!
 * Constructs a DeleteTriggerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTriggerResponse::DeleteTriggerResponse(
        const DeleteTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteTriggerResponsePrivate(this), parent)
{
    setRequest(new DeleteTriggerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTriggerRequest * DeleteTriggerResponse::request() const
{
    Q_D(const DeleteTriggerResponse);
    return static_cast<const DeleteTriggerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteTrigger \a response.
 */
void DeleteTriggerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteTriggerResponsePrivate
 * \brief The DeleteTriggerResponsePrivate class provides private implementation for DeleteTriggerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteTriggerResponsePrivate object with public implementation \a q.
 */
DeleteTriggerResponsePrivate::DeleteTriggerResponsePrivate(
    DeleteTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteTrigger response element from \a xml.
 */
void DeleteTriggerResponsePrivate::parseDeleteTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTriggerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
