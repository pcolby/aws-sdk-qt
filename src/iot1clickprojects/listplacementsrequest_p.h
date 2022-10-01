// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLACEMENTSREQUEST_P_H
#define QTAWS_LISTPLACEMENTSREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "listplacementsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class ListPlacementsRequest;

class ListPlacementsRequestPrivate : public IoT1ClickProjectsRequestPrivate {

public:
    ListPlacementsRequestPrivate(const IoT1ClickProjectsRequest::Action action,
                                   ListPlacementsRequest * const q);
    ListPlacementsRequestPrivate(const ListPlacementsRequestPrivate &other,
                                   ListPlacementsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPlacementsRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
