/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqsgetqueueattributesrequest.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsGetQueueAttributesRequest
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new SqsGetQueueAttributesRequest object.
 *
 * @param parent       This object's parent.
 */
SqsGetQueueAttributesRequest::SqsGetQueueAttributesRequest(QObject * const parent)
    : SqsRequest(SqsRequest::GetQueueAttributesSqsAction, parent)
{

}

bool SqsGetQueueAttributesRequest::isValid() const
{
    return false;
}

QTAWS_END_NAMESPACE
