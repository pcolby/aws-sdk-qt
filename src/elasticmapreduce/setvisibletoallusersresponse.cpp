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

#include "setvisibletoallusersresponse.h"
#include "setvisibletoallusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::SetVisibleToAllUsersResponse
 *
 * \brief The SetVisibleToAllUsersResponse class encapsulates EMR SetVisibleToAllUsers responses.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::setVisibleToAllUsers
 */

/*!
 * @brief  Constructs a new SetVisibleToAllUsersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetVisibleToAllUsersResponse::SetVisibleToAllUsersResponse(
        const SetVisibleToAllUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new SetVisibleToAllUsersResponsePrivate(this), parent)
{
    setRequest(new SetVisibleToAllUsersRequest(request));
    setReply(reply);
}

const SetVisibleToAllUsersRequest * SetVisibleToAllUsersResponse::request() const
{
    Q_D(const SetVisibleToAllUsersResponse);
    return static_cast<const SetVisibleToAllUsersRequest *>(d->request);
}

/*!
 * @brief  Parse a EMR SetVisibleToAllUsers response.
 *
 * @param  response  Response to parse.
 */
void SetVisibleToAllUsersResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetVisibleToAllUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SetVisibleToAllUsersResponsePrivate
 *
 * \brief Private implementation for SetVisibleToAllUsersResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetVisibleToAllUsersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetVisibleToAllUsersResponse instance.
 */
SetVisibleToAllUsersResponsePrivate::SetVisibleToAllUsersResponsePrivate(
    SetVisibleToAllUsersResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EMR SetVisibleToAllUsersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetVisibleToAllUsersResponsePrivate::parseSetVisibleToAllUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetVisibleToAllUsersResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
