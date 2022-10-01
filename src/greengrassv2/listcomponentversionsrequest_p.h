// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTVERSIONSREQUEST_P_H
#define QTAWS_LISTCOMPONENTVERSIONSREQUEST_P_H

#include "greengrassv2request_p.h"
#include "listcomponentversionsrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class ListComponentVersionsRequest;

class ListComponentVersionsRequestPrivate : public GreengrassV2RequestPrivate {

public:
    ListComponentVersionsRequestPrivate(const GreengrassV2Request::Action action,
                                   ListComponentVersionsRequest * const q);
    ListComponentVersionsRequestPrivate(const ListComponentVersionsRequestPrivate &other,
                                   ListComponentVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListComponentVersionsRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
