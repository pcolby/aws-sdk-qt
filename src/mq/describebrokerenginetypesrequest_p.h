// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBROKERENGINETYPESREQUEST_P_H
#define QTAWS_DESCRIBEBROKERENGINETYPESREQUEST_P_H

#include "mqrequest_p.h"
#include "describebrokerenginetypesrequest.h"

namespace QtAws {
namespace Mq {

class DescribeBrokerEngineTypesRequest;

class DescribeBrokerEngineTypesRequestPrivate : public MqRequestPrivate {

public:
    DescribeBrokerEngineTypesRequestPrivate(const MqRequest::Action action,
                                   DescribeBrokerEngineTypesRequest * const q);
    DescribeBrokerEngineTypesRequestPrivate(const DescribeBrokerEngineTypesRequestPrivate &other,
                                   DescribeBrokerEngineTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBrokerEngineTypesRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
