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

#ifndef QTAWS_IMPORTAPPLICATIONUSAGEREQUEST_P_H
#define QTAWS_IMPORTAPPLICATIONUSAGEREQUEST_P_H

#include "applicationcostprofilerrequest_p.h"
#include "importapplicationusagerequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class ImportApplicationUsageRequest;

class ImportApplicationUsageRequestPrivate : public ApplicationCostProfilerRequestPrivate {

public:
    ImportApplicationUsageRequestPrivate(const ApplicationCostProfilerRequest::Action action,
                                   ImportApplicationUsageRequest * const q);
    ImportApplicationUsageRequestPrivate(const ImportApplicationUsageRequestPrivate &other,
                                   ImportApplicationUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportApplicationUsageRequest)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
