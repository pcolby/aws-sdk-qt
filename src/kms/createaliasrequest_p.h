// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALIASREQUEST_P_H
#define QTAWS_CREATEALIASREQUEST_P_H

#include "kmsrequest_p.h"
#include "createaliasrequest.h"

namespace QtAws {
namespace Kms {

class CreateAliasRequest;

class CreateAliasRequestPrivate : public KmsRequestPrivate {

public:
    CreateAliasRequestPrivate(const KmsRequest::Action action,
                                   CreateAliasRequest * const q);
    CreateAliasRequestPrivate(const CreateAliasRequestPrivate &other,
                                   CreateAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAliasRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
