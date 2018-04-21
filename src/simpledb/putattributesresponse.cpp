/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putattributesresponse.h"
#include "putattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SimpleDB {

/*!
 * \class QtAws::SimpleDB::PutAttributesResponse
 * \brief The PutAttributesResponse class provides an interace for SimpleDB PutAttributes responses.
 *
 * \inmodule QtAwsSimpleDB
 *
 *  Amazon SimpleDB is a web service providing the core database functions of data indexing and querying in the cloud. By
 *  offloading the time and effort associated with building and operating a web-scale database, SimpleDB provides developers
 *  the freedom to focus on application development.
 * 
 *  A traditional, clustered relational database requires a sizable upfront capital outlay, is complex to design, and often
 *  requires extensive and repetitive database administration. Amazon SimpleDB is dramatically simpler, requiring no schema,
 *  automatically indexing your data and providing a simple API for storage and access. This approach eliminates the
 *  administrative burden of data modeling, index maintenance, and performance tuning. Developers gain access to this
 *  functionality within Amazon's proven computing environment, are able to scale instantly, and pay only for what they use.
 * 
 *  </p
 * 
 *  Visit <a href="http://aws.amazon.com/simpledb/">http://aws.amazon.com/simpledb/</a> for more information.
 *
 * \sa SimpleDBClient::putAttributes
 */

/*!
 * Constructs a PutAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
PutAttributesResponse::PutAttributesResponse(
        const PutAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SimpleDBResponse(new PutAttributesResponsePrivate(this), parent)
{
    setRequest(new PutAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAttributesRequest * PutAttributesResponse::request() const
{
    Q_D(const PutAttributesResponse);
    return static_cast<const PutAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SimpleDB PutAttributes \a response.
 */
void PutAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SimpleDB::PutAttributesResponsePrivate
 * \brief The PutAttributesResponsePrivate class provides private implementation for PutAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSimpleDB
 */

/*!
 * Constructs a PutAttributesResponsePrivate object with public implementation \a q.
 */
PutAttributesResponsePrivate::PutAttributesResponsePrivate(
    PutAttributesResponse * const q) : SimpleDBResponsePrivate(q)
{

}

/*!
 * Parses a SimpleDB PutAttributes response element from \a xml.
 */
void PutAttributesResponsePrivate::parsePutAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAttributesResponse"));
    /// @todo
}

} // namespace SimpleDB
} // namespace QtAws
