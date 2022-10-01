// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTALIASREQUEST_P_H
#define QTAWS_DELETEACCOUNTALIASREQUEST_P_H

#include "iamrequest_p.h"
#include "deleteaccountaliasrequest.h"

namespace QtAws {
namespace Iam {

class DeleteAccountAliasRequest;

class DeleteAccountAliasRequestPrivate : public IamRequestPrivate {

public:
    DeleteAccountAliasRequestPrivate(const IamRequest::Action action,
                                   DeleteAccountAliasRequest * const q);
    DeleteAccountAliasRequestPrivate(const DeleteAccountAliasRequestPrivate &other,
                                   DeleteAccountAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccountAliasRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
