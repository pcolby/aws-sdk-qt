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

#include "disassociatedelegatefromresourceresponse.h"
#include "disassociatedelegatefromresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  DisassociateDelegateFromResourceResponse
 *
 * @brief  Handles WorkMail DisassociateDelegateFromResource responses.
 *
 * @see    WorkMailClient::disassociateDelegateFromResource
 */

/**
 * @brief  Constructs a new DisassociateDelegateFromResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateDelegateFromResourceResponse::DisassociateDelegateFromResourceResponse(
        const DisassociateDelegateFromResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DisassociateDelegateFromResourceResponsePrivate(this), parent)
{
    setRequest(new DisassociateDelegateFromResourceRequest(request));
    setReply(reply);
}

const DisassociateDelegateFromResourceRequest * DisassociateDelegateFromResourceResponse::request() const
{
    Q_D(const DisassociateDelegateFromResourceResponse);
    return static_cast<const DisassociateDelegateFromResourceRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail DisassociateDelegateFromResource response.
 *
 * @param  response  Response to parse.
 */
void DisassociateDelegateFromResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateDelegateFromResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateDelegateFromResourceResponsePrivate
 *
 * @brief  Private implementation for DisassociateDelegateFromResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateDelegateFromResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateDelegateFromResourceResponse instance.
 */
DisassociateDelegateFromResourceResponsePrivate::DisassociateDelegateFromResourceResponsePrivate(
    DisassociateDelegateFromResourceResponse * const q) : WorkMailResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail DisassociateDelegateFromResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateDelegateFromResourceResponsePrivate::DisassociateDelegateFromResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateDelegateFromResourceResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws
