// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSYSTEMINSTANCESREQUEST_P_H
#define QTAWS_SEARCHSYSTEMINSTANCESREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "searchsysteminstancesrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchSystemInstancesRequest;

class SearchSystemInstancesRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    SearchSystemInstancesRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   SearchSystemInstancesRequest * const q);
    SearchSystemInstancesRequestPrivate(const SearchSystemInstancesRequestPrivate &other,
                                   SearchSystemInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchSystemInstancesRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
