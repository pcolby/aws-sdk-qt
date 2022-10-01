// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTDOMAINCONFIGURATIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "listdomainconfigurationsrequest.h"

namespace QtAws {
namespace IoT {

class ListDomainConfigurationsRequest;

class ListDomainConfigurationsRequestPrivate : public IoTRequestPrivate {

public:
    ListDomainConfigurationsRequestPrivate(const IoTRequest::Action action,
                                   ListDomainConfigurationsRequest * const q);
    ListDomainConfigurationsRequestPrivate(const ListDomainConfigurationsRequestPrivate &other,
                                   ListDomainConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainConfigurationsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
