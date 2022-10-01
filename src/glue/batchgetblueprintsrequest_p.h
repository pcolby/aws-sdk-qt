// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETBLUEPRINTSREQUEST_P_H
#define QTAWS_BATCHGETBLUEPRINTSREQUEST_P_H

#include "gluerequest_p.h"
#include "batchgetblueprintsrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetBlueprintsRequest;

class BatchGetBlueprintsRequestPrivate : public GlueRequestPrivate {

public:
    BatchGetBlueprintsRequestPrivate(const GlueRequest::Action action,
                                   BatchGetBlueprintsRequest * const q);
    BatchGetBlueprintsRequestPrivate(const BatchGetBlueprintsRequestPrivate &other,
                                   BatchGetBlueprintsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetBlueprintsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
