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

#include "cloudsearchdomainresponse.h"
#include "cloudsearchdomainresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearchDomain {

/**
 * @class  CloudSearchDomainResponse
 *
 * @brief  Handles CloudSearchDomain CloudSearchDomain responses.
 *
 * @see    CloudSearchDomainClient::cloudSearchDomain
 */

/**
 * @brief  Constructs a new CloudSearchDomainResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudSearchDomainResponse::CloudSearchDomainResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudSearchDomainResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CloudSearchDomainResponse object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudSearchDomainResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
CloudSearchDomainResponse::CloudSearchDomainResponse(CloudSearchDomainResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void CloudSearchDomainResponse::parseFailure(QIODevice &response)
{
    Q_D(CloudSearchDomainResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/**
 * @internal
 *
 * @class  CloudSearchDomainResponsePrivate
 *
 * @brief  Private implementation for CloudSearchDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudSearchDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudSearchDomainResponse instance.
 */
CloudSearchDomainResponsePrivate::CloudSearchDomainResponsePrivate(
    CloudSearchDomainResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudSearchDomain
} // namespace QtAws
