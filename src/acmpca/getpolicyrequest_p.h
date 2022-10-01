// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOLICYREQUEST_P_H
#define QTAWS_GETPOLICYREQUEST_P_H

#include "acmpcarequest_p.h"
#include "getpolicyrequest.h"

namespace QtAws {
namespace AcmPca {

class GetPolicyRequest;

class GetPolicyRequestPrivate : public AcmPcaRequestPrivate {

public:
    GetPolicyRequestPrivate(const AcmPcaRequest::Action action,
                                   GetPolicyRequest * const q);
    GetPolicyRequestPrivate(const GetPolicyRequestPrivate &other,
                                   GetPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPolicyRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
