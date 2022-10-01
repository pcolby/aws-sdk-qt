// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRANTREQUEST_P_H
#define QTAWS_CREATEGRANTREQUEST_P_H

#include "kmsrequest_p.h"
#include "creategrantrequest.h"

namespace QtAws {
namespace Kms {

class CreateGrantRequest;

class CreateGrantRequestPrivate : public KmsRequestPrivate {

public:
    CreateGrantRequestPrivate(const KmsRequest::Action action,
                                   CreateGrantRequest * const q);
    CreateGrantRequestPrivate(const CreateGrantRequestPrivate &other,
                                   CreateGrantRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGrantRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
