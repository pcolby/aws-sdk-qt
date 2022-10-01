// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYMACREQUEST_P_H
#define QTAWS_VERIFYMACREQUEST_P_H

#include "kmsrequest_p.h"
#include "verifymacrequest.h"

namespace QtAws {
namespace Kms {

class VerifyMacRequest;

class VerifyMacRequestPrivate : public KmsRequestPrivate {

public:
    VerifyMacRequestPrivate(const KmsRequest::Action action,
                                   VerifyMacRequest * const q);
    VerifyMacRequestPrivate(const VerifyMacRequestPrivate &other,
                                   VerifyMacRequest * const q);

private:
    Q_DECLARE_PUBLIC(VerifyMacRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
