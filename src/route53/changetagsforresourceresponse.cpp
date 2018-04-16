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

#include "changetagsforresourceresponse.h"
#include "changetagsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ChangeTagsForResourceResponse
 *
 * \brief The ChangeTagsForResourceResponse class provides an interace for Route53 ChangeTagsForResource responses.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::changeTagsForResource
 */

/*!
 * @brief  Constructs a new ChangeTagsForResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ChangeTagsForResourceResponse::ChangeTagsForResourceResponse(
        const ChangeTagsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ChangeTagsForResourceResponsePrivate(this), parent)
{
    setRequest(new ChangeTagsForResourceRequest(request));
    setReply(reply);
}

const ChangeTagsForResourceRequest * ChangeTagsForResourceResponse::request() const
{
    Q_D(const ChangeTagsForResourceResponse);
    return static_cast<const ChangeTagsForResourceRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53 ChangeTagsForResource response.
 *
 * @param  response  Response to parse.
 */
void ChangeTagsForResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(ChangeTagsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ChangeTagsForResourceResponsePrivate
 *
 * \brief Private implementation for ChangeTagsForResourceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ChangeTagsForResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ChangeTagsForResourceResponse instance.
 */
ChangeTagsForResourceResponsePrivate::ChangeTagsForResourceResponsePrivate(
    ChangeTagsForResourceResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53 ChangeTagsForResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ChangeTagsForResourceResponsePrivate::parseChangeTagsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangeTagsForResourceResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
