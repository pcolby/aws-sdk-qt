// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONNFSREQUEST_P_H
#define QTAWS_CREATELOCATIONNFSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "createlocationnfsrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationNfsRequest;

class CreateLocationNfsRequestPrivate : public DataSyncRequestPrivate {

public:
    CreateLocationNfsRequestPrivate(const DataSyncRequest::Action action,
                                   CreateLocationNfsRequest * const q);
    CreateLocationNfsRequestPrivate(const CreateLocationNfsRequestPrivate &other,
                                   CreateLocationNfsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocationNfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
