// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESDETECTIONV2JOBSREQUEST_P_H
#define QTAWS_LISTENTITIESDETECTIONV2JOBSREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "listentitiesdetectionv2jobsrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListEntitiesDetectionV2JobsRequest;

class ListEntitiesDetectionV2JobsRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    ListEntitiesDetectionV2JobsRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   ListEntitiesDetectionV2JobsRequest * const q);
    ListEntitiesDetectionV2JobsRequestPrivate(const ListEntitiesDetectionV2JobsRequestPrivate &other,
                                   ListEntitiesDetectionV2JobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEntitiesDetectionV2JobsRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
