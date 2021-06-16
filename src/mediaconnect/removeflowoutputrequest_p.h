/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_REMOVEFLOWOUTPUTREQUEST_P_H
#define QTAWS_REMOVEFLOWOUTPUTREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "removeflowoutputrequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowOutputRequest;

class QTAWS_EXPORT RemoveFlowOutputRequestPrivate : public MediaConnectRequestPrivate {

public:
    RemoveFlowOutputRequestPrivate(const MediaConnectRequest::Action action,
                                   RemoveFlowOutputRequest * const q);
    RemoveFlowOutputRequestPrivate(const RemoveFlowOutputRequestPrivate &other,
                                   RemoveFlowOutputRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveFlowOutputRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
