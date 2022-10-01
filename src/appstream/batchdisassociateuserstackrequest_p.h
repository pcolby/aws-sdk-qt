// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEUSERSTACKREQUEST_P_H
#define QTAWS_BATCHDISASSOCIATEUSERSTACKREQUEST_P_H

#include "appstreamrequest_p.h"
#include "batchdisassociateuserstackrequest.h"

namespace QtAws {
namespace AppStream {

class BatchDisassociateUserStackRequest;

class BatchDisassociateUserStackRequestPrivate : public AppStreamRequestPrivate {

public:
    BatchDisassociateUserStackRequestPrivate(const AppStreamRequest::Action action,
                                   BatchDisassociateUserStackRequest * const q);
    BatchDisassociateUserStackRequestPrivate(const BatchDisassociateUserStackRequestPrivate &other,
                                   BatchDisassociateUserStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateUserStackRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
