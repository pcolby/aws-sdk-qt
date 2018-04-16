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

#include "deletereusabledelegationsetresponse.h"
#include "deletereusabledelegationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteReusableDelegationSetResponse
 *
 * \brief The DeleteReusableDelegationSetResponse class provides an interace for Route53 DeleteReusableDelegationSet responses.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::deleteReusableDelegationSet
 */

/*!
 * @brief  Constructs a new DeleteReusableDelegationSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReusableDelegationSetResponse::DeleteReusableDelegationSetResponse(
        const DeleteReusableDelegationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteReusableDelegationSetResponsePrivate(this), parent)
{
    setRequest(new DeleteReusableDelegationSetRequest(request));
    setReply(reply);
}

const DeleteReusableDelegationSetRequest * DeleteReusableDelegationSetResponse::request() const
{
    Q_D(const DeleteReusableDelegationSetResponse);
    return static_cast<const DeleteReusableDelegationSetRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53 DeleteReusableDelegationSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteReusableDelegationSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteReusableDelegationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteReusableDelegationSetResponsePrivate
 *
 * \brief Private implementation for DeleteReusableDelegationSetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteReusableDelegationSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteReusableDelegationSetResponse instance.
 */
DeleteReusableDelegationSetResponsePrivate::DeleteReusableDelegationSetResponsePrivate(
    DeleteReusableDelegationSetResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53 DeleteReusableDelegationSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteReusableDelegationSetResponsePrivate::parseDeleteReusableDelegationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReusableDelegationSetResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
