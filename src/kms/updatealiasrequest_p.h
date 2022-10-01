// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALIASREQUEST_P_H
#define QTAWS_UPDATEALIASREQUEST_P_H

#include "kmsrequest_p.h"
#include "updatealiasrequest.h"

namespace QtAws {
namespace Kms {

class UpdateAliasRequest;

class UpdateAliasRequestPrivate : public KmsRequestPrivate {

public:
    UpdateAliasRequestPrivate(const KmsRequest::Action action,
                                   UpdateAliasRequest * const q);
    UpdateAliasRequestPrivate(const UpdateAliasRequestPrivate &other,
                                   UpdateAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAliasRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
