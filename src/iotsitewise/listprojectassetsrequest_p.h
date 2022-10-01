// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTASSETSREQUEST_P_H
#define QTAWS_LISTPROJECTASSETSREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "listprojectassetsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListProjectAssetsRequest;

class ListProjectAssetsRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    ListProjectAssetsRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   ListProjectAssetsRequest * const q);
    ListProjectAssetsRequestPrivate(const ListProjectAssetsRequestPrivate &other,
                                   ListProjectAssetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProjectAssetsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
