// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBULKIMPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBEBULKIMPORTJOBREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "describebulkimportjobrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeBulkImportJobRequest;

class DescribeBulkImportJobRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DescribeBulkImportJobRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DescribeBulkImportJobRequest * const q);
    DescribeBulkImportJobRequestPrivate(const DescribeBulkImportJobRequestPrivate &other,
                                   DescribeBulkImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBulkImportJobRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
