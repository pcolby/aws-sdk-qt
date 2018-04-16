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

#include "listfindingsresponse.h"
#include "listfindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListFindingsResponse
 *
 * \brief The ListFindingsResponse class provides an interace for Inspector ListFindings responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listFindings
 */

/*!
 * @brief  Constructs a new ListFindingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFindingsResponse::ListFindingsResponse(
        const ListFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListFindingsResponsePrivate(this), parent)
{
    setRequest(new ListFindingsRequest(request));
    setReply(reply);
}

const ListFindingsRequest * ListFindingsResponse::request() const
{
    Q_D(const ListFindingsResponse);
    return static_cast<const ListFindingsRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector ListFindings response.
 *
 * @param  response  Response to parse.
 */
void ListFindingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListFindingsResponsePrivate
 *
 * \brief Private implementation for ListFindingsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListFindingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFindingsResponse instance.
 */
ListFindingsResponsePrivate::ListFindingsResponsePrivate(
    ListFindingsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector ListFindingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFindingsResponsePrivate::parseListFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFindingsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
