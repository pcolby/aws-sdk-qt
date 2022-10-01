// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEZONESREQUEST_P_H
#define QTAWS_LISTAVAILABLEZONESREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "listavailablezonesrequest.h"

namespace QtAws {
namespace CloudHsm {

class ListAvailableZonesRequest;

class ListAvailableZonesRequestPrivate : public CloudHsmRequestPrivate {

public:
    ListAvailableZonesRequestPrivate(const CloudHsmRequest::Action action,
                                   ListAvailableZonesRequest * const q);
    ListAvailableZonesRequestPrivate(const ListAvailableZonesRequestPrivate &other,
                                   ListAvailableZonesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAvailableZonesRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
