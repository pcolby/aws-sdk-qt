// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXONTAPREQUEST_P_H
#define QTAWS_CREATELOCATIONFSXONTAPREQUEST_P_H

#include "datasyncrequest_p.h"
#include "createlocationfsxontaprequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxOntapRequest;

class CreateLocationFsxOntapRequestPrivate : public DataSyncRequestPrivate {

public:
    CreateLocationFsxOntapRequestPrivate(const DataSyncRequest::Action action,
                                   CreateLocationFsxOntapRequest * const q);
    CreateLocationFsxOntapRequestPrivate(const CreateLocationFsxOntapRequestPrivate &other,
                                   CreateLocationFsxOntapRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocationFsxOntapRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
