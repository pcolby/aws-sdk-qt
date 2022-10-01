// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXOPENZFSREQUEST_P_H
#define QTAWS_CREATELOCATIONFSXOPENZFSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "createlocationfsxopenzfsrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxOpenZfsRequest;

class CreateLocationFsxOpenZfsRequestPrivate : public DataSyncRequestPrivate {

public:
    CreateLocationFsxOpenZfsRequestPrivate(const DataSyncRequest::Action action,
                                   CreateLocationFsxOpenZfsRequest * const q);
    CreateLocationFsxOpenZfsRequestPrivate(const CreateLocationFsxOpenZfsRequestPrivate &other,
                                   CreateLocationFsxOpenZfsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocationFsxOpenZfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
