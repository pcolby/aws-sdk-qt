// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXLUSTREREQUEST_P_H
#define QTAWS_CREATELOCATIONFSXLUSTREREQUEST_P_H

#include "datasyncrequest_p.h"
#include "createlocationfsxlustrerequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxLustreRequest;

class CreateLocationFsxLustreRequestPrivate : public DataSyncRequestPrivate {

public:
    CreateLocationFsxLustreRequestPrivate(const DataSyncRequest::Action action,
                                   CreateLocationFsxLustreRequest * const q);
    CreateLocationFsxLustreRequestPrivate(const CreateLocationFsxLustreRequestPrivate &other,
                                   CreateLocationFsxLustreRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocationFsxLustreRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
