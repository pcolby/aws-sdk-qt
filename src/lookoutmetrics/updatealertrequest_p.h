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

#ifndef QTAWS_UPDATEALERTREQUEST_P_H
#define QTAWS_UPDATEALERTREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "updatealertrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateAlertRequest;

class UpdateAlertRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    UpdateAlertRequestPrivate(const LookoutMetricsRequest::Action action,
                                   UpdateAlertRequest * const q);
    UpdateAlertRequestPrivate(const UpdateAlertRequestPrivate &other,
                                   UpdateAlertRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAlertRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
