// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKEXECUTIONSREQUEST_P_H
#define QTAWS_LISTTASKEXECUTIONSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "listtaskexecutionsrequest.h"

namespace QtAws {
namespace DataSync {

class ListTaskExecutionsRequest;

class ListTaskExecutionsRequestPrivate : public DataSyncRequestPrivate {

public:
    ListTaskExecutionsRequestPrivate(const DataSyncRequest::Action action,
                                   ListTaskExecutionsRequest * const q);
    ListTaskExecutionsRequestPrivate(const ListTaskExecutionsRequestPrivate &other,
                                   ListTaskExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTaskExecutionsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
