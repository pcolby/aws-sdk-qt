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

#ifndef QTAWS_STOPCANARYREQUEST_P_H
#define QTAWS_STOPCANARYREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "stopcanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class StopCanaryRequest;

class StopCanaryRequestPrivate : public SyntheticsRequestPrivate {

public:
    StopCanaryRequestPrivate(const SyntheticsRequest::Action action,
                                   StopCanaryRequest * const q);
    StopCanaryRequestPrivate(const StopCanaryRequestPrivate &other,
                                   StopCanaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopCanaryRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
