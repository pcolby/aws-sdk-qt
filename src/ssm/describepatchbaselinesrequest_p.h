// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHBASELINESREQUEST_P_H
#define QTAWS_DESCRIBEPATCHBASELINESREQUEST_P_H

#include "ssmrequest_p.h"
#include "describepatchbaselinesrequest.h"

namespace QtAws {
namespace Ssm {

class DescribePatchBaselinesRequest;

class DescribePatchBaselinesRequestPrivate : public SsmRequestPrivate {

public:
    DescribePatchBaselinesRequestPrivate(const SsmRequest::Action action,
                                   DescribePatchBaselinesRequest * const q);
    DescribePatchBaselinesRequestPrivate(const DescribePatchBaselinesRequestPrivate &other,
                                   DescribePatchBaselinesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePatchBaselinesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
