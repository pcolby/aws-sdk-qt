// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETIREGRANTREQUEST_P_H
#define QTAWS_RETIREGRANTREQUEST_P_H

#include "kmsrequest_p.h"
#include "retiregrantrequest.h"

namespace QtAws {
namespace Kms {

class RetireGrantRequest;

class RetireGrantRequestPrivate : public KmsRequestPrivate {

public:
    RetireGrantRequestPrivate(const KmsRequest::Action action,
                                   RetireGrantRequest * const q);
    RetireGrantRequestPrivate(const RetireGrantRequestPrivate &other,
                                   RetireGrantRequest * const q);

private:
    Q_DECLARE_PUBLIC(RetireGrantRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
