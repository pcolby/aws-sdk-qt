// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBULKIMPORTJOBREQUEST_P_H
#define QTAWS_CREATEBULKIMPORTJOBREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "createbulkimportjobrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateBulkImportJobRequest;

class CreateBulkImportJobRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    CreateBulkImportJobRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   CreateBulkImportJobRequest * const q);
    CreateBulkImportJobRequestPrivate(const CreateBulkImportJobRequestPrivate &other,
                                   CreateBulkImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBulkImportJobRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
