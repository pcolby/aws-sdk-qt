// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEVENDPOINTSREQUEST_P_H
#define QTAWS_BATCHGETDEVENDPOINTSREQUEST_P_H

#include "gluerequest_p.h"
#include "batchgetdevendpointsrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetDevEndpointsRequest;

class BatchGetDevEndpointsRequestPrivate : public GlueRequestPrivate {

public:
    BatchGetDevEndpointsRequestPrivate(const GlueRequest::Action action,
                                   BatchGetDevEndpointsRequest * const q);
    BatchGetDevEndpointsRequestPrivate(const BatchGetDevEndpointsRequestPrivate &other,
                                   BatchGetDevEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetDevEndpointsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
