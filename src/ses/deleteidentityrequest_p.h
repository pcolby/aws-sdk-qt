// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYREQUEST_P_H
#define QTAWS_DELETEIDENTITYREQUEST_P_H

#include "sesrequest_p.h"
#include "deleteidentityrequest.h"

namespace QtAws {
namespace Ses {

class DeleteIdentityRequest;

class DeleteIdentityRequestPrivate : public SesRequestPrivate {

public:
    DeleteIdentityRequestPrivate(const SesRequest::Action action,
                                   DeleteIdentityRequest * const q);
    DeleteIdentityRequestPrivate(const DeleteIdentityRequestPrivate &other,
                                   DeleteIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIdentityRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
