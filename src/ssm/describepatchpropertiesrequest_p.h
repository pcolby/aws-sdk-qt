// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHPROPERTIESREQUEST_P_H
#define QTAWS_DESCRIBEPATCHPROPERTIESREQUEST_P_H

#include "ssmrequest_p.h"
#include "describepatchpropertiesrequest.h"

namespace QtAws {
namespace Ssm {

class DescribePatchPropertiesRequest;

class DescribePatchPropertiesRequestPrivate : public SsmRequestPrivate {

public:
    DescribePatchPropertiesRequestPrivate(const SsmRequest::Action action,
                                   DescribePatchPropertiesRequest * const q);
    DescribePatchPropertiesRequestPrivate(const DescribePatchPropertiesRequestPrivate &other,
                                   DescribePatchPropertiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePatchPropertiesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
