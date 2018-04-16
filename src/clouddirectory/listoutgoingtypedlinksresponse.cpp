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

#include "listoutgoingtypedlinksresponse.h"
#include "listoutgoingtypedlinksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListOutgoingTypedLinksResponse
 *
 * \brief The ListOutgoingTypedLinksResponse class encapsulates CloudDirectory ListOutgoingTypedLinks responses.
 *
 * \ingroup CloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 *
 * \sa CloudDirectoryClient::listOutgoingTypedLinks
 */

/*!
 * @brief  Constructs a new ListOutgoingTypedLinksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOutgoingTypedLinksResponse::ListOutgoingTypedLinksResponse(
        const ListOutgoingTypedLinksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListOutgoingTypedLinksResponsePrivate(this), parent)
{
    setRequest(new ListOutgoingTypedLinksRequest(request));
    setReply(reply);
}

const ListOutgoingTypedLinksRequest * ListOutgoingTypedLinksResponse::request() const
{
    Q_D(const ListOutgoingTypedLinksResponse);
    return static_cast<const ListOutgoingTypedLinksRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudDirectory ListOutgoingTypedLinks response.
 *
 * @param  response  Response to parse.
 */
void ListOutgoingTypedLinksResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListOutgoingTypedLinksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListOutgoingTypedLinksResponsePrivate
 *
 * \brief Private implementation for ListOutgoingTypedLinksResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListOutgoingTypedLinksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListOutgoingTypedLinksResponse instance.
 */
ListOutgoingTypedLinksResponsePrivate::ListOutgoingTypedLinksResponsePrivate(
    ListOutgoingTypedLinksResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudDirectory ListOutgoingTypedLinksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListOutgoingTypedLinksResponsePrivate::parseListOutgoingTypedLinksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOutgoingTypedLinksResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
