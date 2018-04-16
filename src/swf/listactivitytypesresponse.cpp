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

#include "listactivitytypesresponse.h"
#include "listactivitytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::ListActivityTypesResponse
 *
 * \brief The ListActivityTypesResponse class encapsulates SWF ListActivityTypes responses.
 *
 * \ingroup SWF
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SWFClient::listActivityTypes
 */

/*!
 * @brief  Constructs a new ListActivityTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListActivityTypesResponse::ListActivityTypesResponse(
        const ListActivityTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new ListActivityTypesResponsePrivate(this), parent)
{
    setRequest(new ListActivityTypesRequest(request));
    setReply(reply);
}

const ListActivityTypesRequest * ListActivityTypesResponse::request() const
{
    Q_D(const ListActivityTypesResponse);
    return static_cast<const ListActivityTypesRequest *>(d->request);
}

/*!
 * @brief  Parse a SWF ListActivityTypes response.
 *
 * @param  response  Response to parse.
 */
void ListActivityTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListActivityTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListActivityTypesResponsePrivate
 *
 * \brief Private implementation for ListActivityTypesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListActivityTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListActivityTypesResponse instance.
 */
ListActivityTypesResponsePrivate::ListActivityTypesResponsePrivate(
    ListActivityTypesResponse * const q) : SWFResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SWF ListActivityTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListActivityTypesResponsePrivate::parseListActivityTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListActivityTypesResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
