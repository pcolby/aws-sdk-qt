// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAINGESTIONJOBSREQUEST_P_H
#define QTAWS_LISTDATAINGESTIONJOBSREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "listdataingestionjobsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListDataIngestionJobsRequest;

class ListDataIngestionJobsRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    ListDataIngestionJobsRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   ListDataIngestionJobsRequest * const q);
    ListDataIngestionJobsRequestPrivate(const ListDataIngestionJobsRequestPrivate &other,
                                   ListDataIngestionJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataIngestionJobsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
