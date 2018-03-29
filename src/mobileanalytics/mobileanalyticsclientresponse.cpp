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

#include "mobileanalyticsclientresponse.h"
#include "mobileanalyticsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MobileAnalytics {

/**
 * @class  MobileAnalyticsClientResponse
 *
 * @brief  Handles MobileAnalytics MobileAnalyticsClient responses.
 *
 * @see    MobileAnalyticsClient::mobileAnalyticsClient
 */

/**
 * @brief  Constructs a new MobileAnalyticsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
MobileAnalyticsClientResponse::MobileAnalyticsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new MobileAnalyticsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  MobileAnalyticsClientResponsePrivate
 *
 * @brief  Private implementation for MobileAnalyticsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MobileAnalyticsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MobileAnalyticsClientResponse instance.
 */
MobileAnalyticsClientResponsePrivate::MobileAnalyticsClientResponsePrivate(
    MobileAnalyticsClientQueueResponse * const q) : MobileAnalyticsClientPrivate(q)
{

}

} // namespace MobileAnalytics
} // namespace QtAws
