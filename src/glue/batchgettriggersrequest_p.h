// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETTRIGGERSREQUEST_P_H
#define QTAWS_BATCHGETTRIGGERSREQUEST_P_H

#include "gluerequest_p.h"
#include "batchgettriggersrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetTriggersRequest;

class BatchGetTriggersRequestPrivate : public GlueRequestPrivate {

public:
    BatchGetTriggersRequestPrivate(const GlueRequest::Action action,
                                   BatchGetTriggersRequest * const q);
    BatchGetTriggersRequestPrivate(const BatchGetTriggersRequestPrivate &other,
                                   BatchGetTriggersRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetTriggersRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
