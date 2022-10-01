// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
