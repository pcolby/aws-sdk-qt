// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEIMPORTDATAREQUEST_P_H
#define QTAWS_BATCHDELETEIMPORTDATAREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "batchdeleteimportdatarequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class BatchDeleteImportDataRequest;

class BatchDeleteImportDataRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    BatchDeleteImportDataRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   BatchDeleteImportDataRequest * const q);
    BatchDeleteImportDataRequestPrivate(const BatchDeleteImportDataRequestPrivate &other,
                                   BatchDeleteImportDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteImportDataRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
