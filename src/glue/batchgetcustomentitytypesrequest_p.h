// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCUSTOMENTITYTYPESREQUEST_P_H
#define QTAWS_BATCHGETCUSTOMENTITYTYPESREQUEST_P_H

#include "gluerequest_p.h"
#include "batchgetcustomentitytypesrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetCustomEntityTypesRequest;

class BatchGetCustomEntityTypesRequestPrivate : public GlueRequestPrivate {

public:
    BatchGetCustomEntityTypesRequestPrivate(const GlueRequest::Action action,
                                   BatchGetCustomEntityTypesRequest * const q);
    BatchGetCustomEntityTypesRequestPrivate(const BatchGetCustomEntityTypesRequestPrivate &other,
                                   BatchGetCustomEntityTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetCustomEntityTypesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
