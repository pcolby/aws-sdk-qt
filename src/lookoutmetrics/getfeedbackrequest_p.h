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

#ifndef QTAWS_GETFEEDBACKREQUEST_P_H
#define QTAWS_GETFEEDBACKREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "getfeedbackrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class GetFeedbackRequest;

class GetFeedbackRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    GetFeedbackRequestPrivate(const LookoutMetricsRequest::Action action,
                                   GetFeedbackRequest * const q);
    GetFeedbackRequestPrivate(const GetFeedbackRequestPrivate &other,
                                   GetFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFeedbackRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
