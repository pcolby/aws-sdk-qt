// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEUSERSTACKREQUEST_P_H
#define QTAWS_BATCHASSOCIATEUSERSTACKREQUEST_P_H

#include "appstreamrequest_p.h"
#include "batchassociateuserstackrequest.h"

namespace QtAws {
namespace AppStream {

class BatchAssociateUserStackRequest;

class BatchAssociateUserStackRequestPrivate : public AppStreamRequestPrivate {

public:
    BatchAssociateUserStackRequestPrivate(const AppStreamRequest::Action action,
                                   BatchAssociateUserStackRequest * const q);
    BatchAssociateUserStackRequestPrivate(const BatchAssociateUserStackRequestPrivate &other,
                                   BatchAssociateUserStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchAssociateUserStackRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
