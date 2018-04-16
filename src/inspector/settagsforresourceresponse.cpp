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

#include "settagsforresourceresponse.h"
#include "settagsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::SetTagsForResourceResponse
 *
 * \brief The SetTagsForResourceResponse class encapsulates Inspector SetTagsForResource responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::setTagsForResource
 */

/*!
 * @brief  Constructs a new SetTagsForResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetTagsForResourceResponse::SetTagsForResourceResponse(
        const SetTagsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new SetTagsForResourceResponsePrivate(this), parent)
{
    setRequest(new SetTagsForResourceRequest(request));
    setReply(reply);
}

const SetTagsForResourceRequest * SetTagsForResourceResponse::request() const
{
    Q_D(const SetTagsForResourceResponse);
    return static_cast<const SetTagsForResourceRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector SetTagsForResource response.
 *
 * @param  response  Response to parse.
 */
void SetTagsForResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetTagsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SetTagsForResourceResponsePrivate
 *
 * \brief Private implementation for SetTagsForResourceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetTagsForResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetTagsForResourceResponse instance.
 */
SetTagsForResourceResponsePrivate::SetTagsForResourceResponsePrivate(
    SetTagsForResourceResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector SetTagsForResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetTagsForResourceResponsePrivate::parseSetTagsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetTagsForResourceResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
