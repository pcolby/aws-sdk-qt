// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOLICYREQUEST_P_H
#define QTAWS_DELETEPOLICYREQUEST_P_H

#include "acmpcarequest_p.h"
#include "deletepolicyrequest.h"

namespace QtAws {
namespace AcmPca {

class DeletePolicyRequest;

class DeletePolicyRequestPrivate : public AcmPcaRequestPrivate {

public:
    DeletePolicyRequestPrivate(const AcmPcaRequest::Action action,
                                   DeletePolicyRequest * const q);
    DeletePolicyRequestPrivate(const DeletePolicyRequestPrivate &other,
                                   DeletePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePolicyRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
