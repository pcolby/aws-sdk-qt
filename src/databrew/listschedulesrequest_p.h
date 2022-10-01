// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULESREQUEST_P_H
#define QTAWS_LISTSCHEDULESREQUEST_P_H

#include "databrewrequest_p.h"
#include "listschedulesrequest.h"

namespace QtAws {
namespace DataBrew {

class ListSchedulesRequest;

class ListSchedulesRequestPrivate : public DataBrewRequestPrivate {

public:
    ListSchedulesRequestPrivate(const DataBrewRequest::Action action,
                                   ListSchedulesRequest * const q);
    ListSchedulesRequestPrivate(const ListSchedulesRequestPrivate &other,
                                   ListSchedulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSchedulesRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
