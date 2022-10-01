// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONEDCAPACITYREQUEST_P_H
#define QTAWS_LISTPROVISIONEDCAPACITYREQUEST_P_H

#include "glacierrequest_p.h"
#include "listprovisionedcapacityrequest.h"

namespace QtAws {
namespace Glacier {

class ListProvisionedCapacityRequest;

class ListProvisionedCapacityRequestPrivate : public GlacierRequestPrivate {

public:
    ListProvisionedCapacityRequestPrivate(const GlacierRequest::Action action,
                                   ListProvisionedCapacityRequest * const q);
    ListProvisionedCapacityRequestPrivate(const ListProvisionedCapacityRequestPrivate &other,
                                   ListProvisionedCapacityRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProvisionedCapacityRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
