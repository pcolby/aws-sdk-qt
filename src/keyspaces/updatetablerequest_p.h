// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLEREQUEST_P_H
#define QTAWS_UPDATETABLEREQUEST_P_H

#include "keyspacesrequest_p.h"
#include "updatetablerequest.h"

namespace QtAws {
namespace Keyspaces {

class UpdateTableRequest;

class UpdateTableRequestPrivate : public KeyspacesRequestPrivate {

public:
    UpdateTableRequestPrivate(const KeyspacesRequest::Action action,
                                   UpdateTableRequest * const q);
    UpdateTableRequestPrivate(const UpdateTableRequestPrivate &other,
                                   UpdateTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTableRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
