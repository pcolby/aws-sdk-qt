// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERELATEDITEMSREQUEST_P_H
#define QTAWS_UPDATERELATEDITEMSREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "updaterelateditemsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateRelatedItemsRequest;

class UpdateRelatedItemsRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    UpdateRelatedItemsRequestPrivate(const SsmIncidentsRequest::Action action,
                                   UpdateRelatedItemsRequest * const q);
    UpdateRelatedItemsRequestPrivate(const UpdateRelatedItemsRequestPrivate &other,
                                   UpdateRelatedItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRelatedItemsRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
