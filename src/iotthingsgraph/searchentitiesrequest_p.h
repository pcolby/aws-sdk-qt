// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHENTITIESREQUEST_P_H
#define QTAWS_SEARCHENTITIESREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "searchentitiesrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchEntitiesRequest;

class SearchEntitiesRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    SearchEntitiesRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   SearchEntitiesRequest * const q);
    SearchEntitiesRequestPrivate(const SearchEntitiesRequestPrivate &other,
                                   SearchEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchEntitiesRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
