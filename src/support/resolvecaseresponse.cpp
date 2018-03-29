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

#include "resolvecaseresponse.h"
#include "resolvecaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Support {

/**
 * @class  ResolveCaseResponse
 *
 * @brief  Handles Support ResolveCase responses.
 *
 * @see    SupportClient::resolveCase
 */

/**
 * @brief  Constructs a new ResolveCaseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResolveCaseResponse::ResolveCaseResponse(
        const ResolveCaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new ResolveCaseResponsePrivate(this), parent)
{
    setRequest(new ResolveCaseRequest(request));
    setReply(reply);
}

const ResolveCaseRequest * ResolveCaseResponse::request() const
{
    Q_D(const ResolveCaseResponse);
    return static_cast<const ResolveCaseRequest *>(d->request);
}

/**
 * @brief  Parse a Support ResolveCase response.
 *
 * @param  response  Response to parse.
 */
void ResolveCaseResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResolveCaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResolveCaseResponsePrivate
 *
 * @brief  Private implementation for ResolveCaseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResolveCaseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResolveCaseResponse instance.
 */
ResolveCaseResponsePrivate::ResolveCaseResponsePrivate(
    ResolveCaseResponse * const q) : SupportResponsePrivate(q)
{

}

/**
 * @brief  Parse an Support ResolveCaseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResolveCaseResponsePrivate::ResolveCaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResolveCaseResponse"));
    /// @todo
}

} // namespace Support
} // namespace QtAws
