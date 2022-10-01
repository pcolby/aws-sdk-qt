// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGENERATEDCODEJOBSREQUEST_P_H
#define QTAWS_LISTGENERATEDCODEJOBSREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "listgeneratedcodejobsrequest.h"

namespace QtAws {
namespace GameSparks {

class ListGeneratedCodeJobsRequest;

class ListGeneratedCodeJobsRequestPrivate : public GameSparksRequestPrivate {

public:
    ListGeneratedCodeJobsRequestPrivate(const GameSparksRequest::Action action,
                                   ListGeneratedCodeJobsRequest * const q);
    ListGeneratedCodeJobsRequestPrivate(const ListGeneratedCodeJobsRequestPrivate &other,
                                   ListGeneratedCodeJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGeneratedCodeJobsRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
