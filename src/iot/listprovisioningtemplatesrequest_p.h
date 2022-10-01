// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGTEMPLATESREQUEST_P_H
#define QTAWS_LISTPROVISIONINGTEMPLATESREQUEST_P_H

#include "iotrequest_p.h"
#include "listprovisioningtemplatesrequest.h"

namespace QtAws {
namespace IoT {

class ListProvisioningTemplatesRequest;

class ListProvisioningTemplatesRequestPrivate : public IoTRequestPrivate {

public:
    ListProvisioningTemplatesRequestPrivate(const IoTRequest::Action action,
                                   ListProvisioningTemplatesRequest * const q);
    ListProvisioningTemplatesRequestPrivate(const ListProvisioningTemplatesRequestPrivate &other,
                                   ListProvisioningTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProvisioningTemplatesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
