// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEFINDINGSREQUEST_P_H
#define QTAWS_BATCHUPDATEFINDINGSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "batchupdatefindingsrequest.h"

namespace QtAws {
namespace SecurityHub {

class BatchUpdateFindingsRequest;

class BatchUpdateFindingsRequestPrivate : public SecurityHubRequestPrivate {

public:
    BatchUpdateFindingsRequestPrivate(const SecurityHubRequest::Action action,
                                   BatchUpdateFindingsRequest * const q);
    BatchUpdateFindingsRequestPrivate(const BatchUpdateFindingsRequestPrivate &other,
                                   BatchUpdateFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchUpdateFindingsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
