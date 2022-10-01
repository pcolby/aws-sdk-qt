// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDASSETSREQUEST_P_H
#define QTAWS_LISTASSOCIATEDASSETSREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "listassociatedassetsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssociatedAssetsRequest;

class ListAssociatedAssetsRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    ListAssociatedAssetsRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   ListAssociatedAssetsRequest * const q);
    ListAssociatedAssetsRequestPrivate(const ListAssociatedAssetsRequestPrivate &other,
                                   ListAssociatedAssetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssociatedAssetsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
