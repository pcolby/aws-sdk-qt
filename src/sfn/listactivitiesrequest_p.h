// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVITIESREQUEST_P_H
#define QTAWS_LISTACTIVITIESREQUEST_P_H

#include "sfnrequest_p.h"
#include "listactivitiesrequest.h"

namespace QtAws {
namespace Sfn {

class ListActivitiesRequest;

class ListActivitiesRequestPrivate : public SfnRequestPrivate {

public:
    ListActivitiesRequestPrivate(const SfnRequest::Action action,
                                   ListActivitiesRequest * const q);
    ListActivitiesRequestPrivate(const ListActivitiesRequestPrivate &other,
                                   ListActivitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListActivitiesRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
