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

#include "listinvalidationsresponse.h"
#include "listinvalidationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListInvalidationsResponse
 *
 * \brief The ListInvalidationsResponse class provides an interace for CloudFront ListInvalidations responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listInvalidations
 */

/*!
 * @brief  Constructs a new ListInvalidationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInvalidationsResponse::ListInvalidationsResponse(
        const ListInvalidationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListInvalidationsResponsePrivate(this), parent)
{
    setRequest(new ListInvalidationsRequest(request));
    setReply(reply);
}

const ListInvalidationsRequest * ListInvalidationsResponse::request() const
{
    Q_D(const ListInvalidationsResponse);
    return static_cast<const ListInvalidationsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront ListInvalidations response.
 *
 * @param  response  Response to parse.
 */
void ListInvalidationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListInvalidationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListInvalidationsResponsePrivate
 *
 * \brief Private implementation for ListInvalidationsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListInvalidationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInvalidationsResponse instance.
 */
ListInvalidationsResponsePrivate::ListInvalidationsResponsePrivate(
    ListInvalidationsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront ListInvalidationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInvalidationsResponsePrivate::parseListInvalidationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInvalidationsResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
