// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGTEMPLATEVERSIONSREQUEST_P_H
#define QTAWS_LISTPROVISIONINGTEMPLATEVERSIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "listprovisioningtemplateversionsrequest.h"

namespace QtAws {
namespace IoT {

class ListProvisioningTemplateVersionsRequest;

class ListProvisioningTemplateVersionsRequestPrivate : public IoTRequestPrivate {

public:
    ListProvisioningTemplateVersionsRequestPrivate(const IoTRequest::Action action,
                                   ListProvisioningTemplateVersionsRequest * const q);
    ListProvisioningTemplateVersionsRequestPrivate(const ListProvisioningTemplateVersionsRequestPrivate &other,
                                   ListProvisioningTemplateVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProvisioningTemplateVersionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
