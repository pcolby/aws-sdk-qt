// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEKEYDESCRIPTIONREQUEST_P_H
#define QTAWS_UPDATEKEYDESCRIPTIONREQUEST_P_H

#include "kmsrequest_p.h"
#include "updatekeydescriptionrequest.h"

namespace QtAws {
namespace Kms {

class UpdateKeyDescriptionRequest;

class UpdateKeyDescriptionRequestPrivate : public KmsRequestPrivate {

public:
    UpdateKeyDescriptionRequestPrivate(const KmsRequest::Action action,
                                   UpdateKeyDescriptionRequest * const q);
    UpdateKeyDescriptionRequestPrivate(const UpdateKeyDescriptionRequestPrivate &other,
                                   UpdateKeyDescriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateKeyDescriptionRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
