// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNREQUEST_P_H
#define QTAWS_SIGNREQUEST_P_H

#include "kmsrequest_p.h"
#include "signrequest.h"

namespace QtAws {
namespace Kms {

class SignRequest;

class SignRequestPrivate : public KmsRequestPrivate {

public:
    SignRequestPrivate(const KmsRequest::Action action,
                                   SignRequest * const q);
    SignRequestPrivate(const SignRequestPrivate &other,
                                   SignRequest * const q);

private:
    Q_DECLARE_PUBLIC(SignRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
