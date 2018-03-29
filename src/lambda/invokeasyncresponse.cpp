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

#include "invokeasyncresponse.h"
#include "invokeasyncresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  InvokeAsyncResponse
 *
 * @brief  Handles Lambda InvokeAsync responses.
 *
 * @see    LambdaClient::invokeAsync
 */

/**
 * @brief  Constructs a new InvokeAsyncResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InvokeAsyncResponse::InvokeAsyncResponse(
        const InvokeAsyncRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InvokeAsyncResponse(new InvokeAsyncResponsePrivate(this), parent)
{
    setRequest(new InvokeAsyncRequest(request));
    setReply(reply);
}

const InvokeAsyncRequest * InvokeAsyncResponse::request() const
{
    Q_D(const InvokeAsyncResponse);
    return static_cast<const InvokeAsyncRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda InvokeAsync response.
 *
 * @param  response  Response to parse.
 */
void InvokeAsyncResponse::parseSuccess(QIODevice &response)
{
    Q_D(InvokeAsyncResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InvokeAsyncResponsePrivate
 *
 * @brief  Private implementation for InvokeAsyncResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InvokeAsyncResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InvokeAsyncResponse instance.
 */
InvokeAsyncResponsePrivate::InvokeAsyncResponsePrivate(
    InvokeAsyncResponse * const q) : LambdaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lambda InvokeAsyncResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InvokeAsyncResponsePrivate::parseInvokeAsyncResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InvokeAsyncResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
