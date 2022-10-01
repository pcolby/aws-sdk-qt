// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONEFSREQUEST_P_H
#define QTAWS_CREATELOCATIONEFSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "createlocationefsrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationEfsRequest;

class CreateLocationEfsRequestPrivate : public DataSyncRequestPrivate {

public:
    CreateLocationEfsRequestPrivate(const DataSyncRequest::Action action,
                                   CreateLocationEfsRequest * const q);
    CreateLocationEfsRequestPrivate(const CreateLocationEfsRequestPrivate &other,
                                   CreateLocationEfsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocationEfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
