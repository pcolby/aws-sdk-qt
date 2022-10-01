// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEUSERREQUEST_P_H
#define QTAWS_ENABLEUSERREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "enableuserrequest.h"

namespace QtAws {
namespace FinspaceData {

class EnableUserRequest;

class EnableUserRequestPrivate : public FinspaceDataRequestPrivate {

public:
    EnableUserRequestPrivate(const FinspaceDataRequest::Action action,
                                   EnableUserRequest * const q);
    EnableUserRequestPrivate(const EnableUserRequestPrivate &other,
                                   EnableUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableUserRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
