// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETTRACESREQUEST_P_H
#define QTAWS_BATCHGETTRACESREQUEST_P_H

#include "xrayrequest_p.h"
#include "batchgettracesrequest.h"

namespace QtAws {
namespace XRay {

class BatchGetTracesRequest;

class BatchGetTracesRequestPrivate : public XRayRequestPrivate {

public:
    BatchGetTracesRequestPrivate(const XRayRequest::Action action,
                                   BatchGetTracesRequest * const q);
    BatchGetTracesRequestPrivate(const BatchGetTracesRequestPrivate &other,
                                   BatchGetTracesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetTracesRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
