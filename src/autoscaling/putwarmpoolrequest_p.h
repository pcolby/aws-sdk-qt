// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTWARMPOOLREQUEST_P_H
#define QTAWS_PUTWARMPOOLREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "putwarmpoolrequest.h"

namespace QtAws {
namespace AutoScaling {

class PutWarmPoolRequest;

class PutWarmPoolRequestPrivate : public AutoScalingRequestPrivate {

public:
    PutWarmPoolRequestPrivate(const AutoScalingRequest::Action action,
                                   PutWarmPoolRequest * const q);
    PutWarmPoolRequestPrivate(const PutWarmPoolRequestPrivate &other,
                                   PutWarmPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutWarmPoolRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
