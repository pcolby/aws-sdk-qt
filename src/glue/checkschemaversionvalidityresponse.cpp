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

#include "checkschemaversionvalidityresponse.h"
#include "checkschemaversionvalidityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CheckSchemaVersionValidityResponse
 * \brief The CheckSchemaVersionValidityResponse class provides an interace for Glue CheckSchemaVersionValidity responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::checkSchemaVersionValidity
 */

/*!
 * Constructs a CheckSchemaVersionValidityResponse object for \a reply to \a request, with parent \a parent.
 */
CheckSchemaVersionValidityResponse::CheckSchemaVersionValidityResponse(
        const CheckSchemaVersionValidityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CheckSchemaVersionValidityResponsePrivate(this), parent)
{
    setRequest(new CheckSchemaVersionValidityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CheckSchemaVersionValidityRequest * CheckSchemaVersionValidityResponse::request() const
{
    Q_D(const CheckSchemaVersionValidityResponse);
    return static_cast<const CheckSchemaVersionValidityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CheckSchemaVersionValidity \a response.
 */
void CheckSchemaVersionValidityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CheckSchemaVersionValidityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CheckSchemaVersionValidityResponsePrivate
 * \brief The CheckSchemaVersionValidityResponsePrivate class provides private implementation for CheckSchemaVersionValidityResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CheckSchemaVersionValidityResponsePrivate object with public implementation \a q.
 */
CheckSchemaVersionValidityResponsePrivate::CheckSchemaVersionValidityResponsePrivate(
    CheckSchemaVersionValidityResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CheckSchemaVersionValidity response element from \a xml.
 */
void CheckSchemaVersionValidityResponsePrivate::parseCheckSchemaVersionValidityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CheckSchemaVersionValidityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
