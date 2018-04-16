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

#include "deletedomainresponse.h"
#include "deletedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SimpleDB {

/*!
 * \class QtAws::SimpleDB::DeleteDomainResponse
 *
 * \brief The DeleteDomainResponse class encapsulates SimpleDB DeleteDomain responses.
 *
 * \ingroup SimpleDB
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
 * \sa SimpleDBClient::deleteDomain
 */

/*!
 * @brief  Constructs a new DeleteDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDomainResponse::DeleteDomainResponse(
        const DeleteDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SimpleDBResponse(new DeleteDomainResponsePrivate(this), parent)
{
    setRequest(new DeleteDomainRequest(request));
    setReply(reply);
}

const DeleteDomainRequest * DeleteDomainResponse::request() const
{
    Q_D(const DeleteDomainResponse);
    return static_cast<const DeleteDomainRequest *>(d->request);
}

/*!
 * @brief  Parse a SimpleDB DeleteDomain response.
 *
 * @param  response  Response to parse.
 */
void DeleteDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteDomainResponsePrivate
 *
 * \brief Private implementation for DeleteDomainResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDomainResponse instance.
 */
DeleteDomainResponsePrivate::DeleteDomainResponsePrivate(
    DeleteDomainResponse * const q) : SimpleDBResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SimpleDB DeleteDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDomainResponsePrivate::parseDeleteDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDomainResponse"));
    /// @todo
}

} // namespace SimpleDB
} // namespace QtAws
