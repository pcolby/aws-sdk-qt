// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYVERSIONSREQUEST_P_H
#define QTAWS_LISTPOLICYVERSIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "listpolicyversionsrequest.h"

namespace QtAws {
namespace IoT {

class ListPolicyVersionsRequest;

class ListPolicyVersionsRequestPrivate : public IoTRequestPrivate {

public:
    ListPolicyVersionsRequestPrivate(const IoTRequest::Action action,
                                   ListPolicyVersionsRequest * const q);
    ListPolicyVersionsRequestPrivate(const ListPolicyVersionsRequestPrivate &other,
                                   ListPolicyVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPolicyVersionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
