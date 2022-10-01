// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLEREQUEST_P_H
#define QTAWS_RESTORETABLEREQUEST_P_H

#include "keyspacesrequest_p.h"
#include "restoretablerequest.h"

namespace QtAws {
namespace Keyspaces {

class RestoreTableRequest;

class RestoreTableRequestPrivate : public KeyspacesRequestPrivate {

public:
    RestoreTableRequestPrivate(const KeyspacesRequest::Action action,
                                   RestoreTableRequest * const q);
    RestoreTableRequestPrivate(const RestoreTableRequestPrivate &other,
                                   RestoreTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreTableRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
