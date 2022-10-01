// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYSREQUEST_P_H
#define QTAWS_LISTGATEWAYSREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "listgatewaysrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListGatewaysRequest;

class ListGatewaysRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    ListGatewaysRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   ListGatewaysRequest * const q);
    ListGatewaysRequestPrivate(const ListGatewaysRequestPrivate &other,
                                   ListGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGatewaysRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
