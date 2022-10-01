// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTALSREQUEST_P_H
#define QTAWS_LISTPORTALSREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "listportalsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListPortalsRequest;

class ListPortalsRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    ListPortalsRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   ListPortalsRequest * const q);
    ListPortalsRequestPrivate(const ListPortalsRequestPrivate &other,
                                   ListPortalsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPortalsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
