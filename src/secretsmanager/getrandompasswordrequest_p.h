// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRANDOMPASSWORDREQUEST_P_H
#define QTAWS_GETRANDOMPASSWORDREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "getrandompasswordrequest.h"

namespace QtAws {
namespace SecretsManager {

class GetRandomPasswordRequest;

class GetRandomPasswordRequestPrivate : public SecretsManagerRequestPrivate {

public:
    GetRandomPasswordRequestPrivate(const SecretsManagerRequest::Action action,
                                   GetRandomPasswordRequest * const q);
    GetRandomPasswordRequestPrivate(const GetRandomPasswordRequestPrivate &other,
                                   GetRandomPasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRandomPasswordRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
