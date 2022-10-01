// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHIMPORTFINDINGSREQUEST_P_H
#define QTAWS_BATCHIMPORTFINDINGSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "batchimportfindingsrequest.h"

namespace QtAws {
namespace SecurityHub {

class BatchImportFindingsRequest;

class BatchImportFindingsRequestPrivate : public SecurityHubRequestPrivate {

public:
    BatchImportFindingsRequestPrivate(const SecurityHubRequest::Action action,
                                   BatchImportFindingsRequest * const q);
    BatchImportFindingsRequestPrivate(const BatchImportFindingsRequestPrivate &other,
                                   BatchImportFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchImportFindingsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
