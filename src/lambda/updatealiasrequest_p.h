// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALIASREQUEST_P_H
#define QTAWS_UPDATEALIASREQUEST_P_H

#include "lambdarequest_p.h"
#include "updatealiasrequest.h"

namespace QtAws {
namespace Lambda {

class UpdateAliasRequest;

class UpdateAliasRequestPrivate : public LambdaRequestPrivate {

public:
    UpdateAliasRequestPrivate(const LambdaRequest::Action action,
                                   UpdateAliasRequest * const q);
    UpdateAliasRequestPrivate(const UpdateAliasRequestPrivate &other,
                                   UpdateAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAliasRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
