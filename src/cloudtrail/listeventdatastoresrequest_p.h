// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTDATASTORESREQUEST_P_H
#define QTAWS_LISTEVENTDATASTORESREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "listeventdatastoresrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListEventDataStoresRequest;

class ListEventDataStoresRequestPrivate : public CloudTrailRequestPrivate {

public:
    ListEventDataStoresRequestPrivate(const CloudTrailRequest::Action action,
                                   ListEventDataStoresRequest * const q);
    ListEventDataStoresRequestPrivate(const ListEventDataStoresRequestPrivate &other,
                                   ListEventDataStoresRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventDataStoresRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
