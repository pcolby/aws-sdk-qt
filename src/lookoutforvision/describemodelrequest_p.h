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

#ifndef QTAWS_DESCRIBEMODELREQUEST_P_H
#define QTAWS_DESCRIBEMODELREQUEST_P_H

#include "lookoutforvisionrequest_p.h"
#include "describemodelrequest.h"

namespace QtAws {
namespace LookoutforVision {

class DescribeModelRequest;

class QTAWS_EXPORT DescribeModelRequestPrivate : public LookoutforVisionRequestPrivate {

public:
    DescribeModelRequestPrivate(const LookoutforVisionRequest::Action action,
                                   DescribeModelRequest * const q);
    DescribeModelRequestPrivate(const DescribeModelRequestPrivate &other,
                                   DescribeModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeModelRequest)

};

} // namespace LookoutforVision
} // namespace QtAws

#endif
