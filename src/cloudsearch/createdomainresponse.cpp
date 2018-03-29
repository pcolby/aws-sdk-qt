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

#include "createdomainresponse.h"
#include "createdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/**
 * @class  CreateDomainResponse
 *
 * @brief  Handles CloudSearch CreateDomain responses.
 *
 * @see    CloudSearchClient::createDomain
 */

/**
 * @brief  Constructs a new CreateDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDomainResponse::CreateDomainResponse(
        const CreateDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new CreateDomainResponsePrivate(this), parent)
{
    setRequest(new CreateDomainRequest(request));
    setReply(reply);
}

const CreateDomainRequest * CreateDomainResponse::request() const
{
    Q_D(const CreateDomainResponse);
    return static_cast<const CreateDomainRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch CreateDomain response.
 *
 * @param  response  Response to parse.
 */
void CreateDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDomainResponsePrivate
 *
 * @brief  Private implementation for CreateDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDomainResponse instance.
 */
CreateDomainResponsePrivate::CreateDomainResponsePrivate(
    CreateDomainResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch CreateDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDomainResponsePrivate::CreateDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
