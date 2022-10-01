// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEINSTANCEOUTPUTSREQUEST_P_H
#define QTAWS_LISTSERVICEINSTANCEOUTPUTSREQUEST_P_H

#include "protonrequest_p.h"
#include "listserviceinstanceoutputsrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceInstanceOutputsRequest;

class ListServiceInstanceOutputsRequestPrivate : public ProtonRequestPrivate {

public:
    ListServiceInstanceOutputsRequestPrivate(const ProtonRequest::Action action,
                                   ListServiceInstanceOutputsRequest * const q);
    ListServiceInstanceOutputsRequestPrivate(const ListServiceInstanceOutputsRequestPrivate &other,
                                   ListServiceInstanceOutputsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServiceInstanceOutputsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
