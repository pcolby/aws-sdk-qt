// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETRELATIONSHIPSREQUEST_P_H
#define QTAWS_LISTASSETRELATIONSHIPSREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "listassetrelationshipsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssetRelationshipsRequest;

class ListAssetRelationshipsRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    ListAssetRelationshipsRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   ListAssetRelationshipsRequest * const q);
    ListAssetRelationshipsRequestPrivate(const ListAssetRelationshipsRequestPrivate &other,
                                   ListAssetRelationshipsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssetRelationshipsRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
