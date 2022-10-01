// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRIMARYREGIONREQUEST_P_H
#define QTAWS_UPDATEPRIMARYREGIONREQUEST_P_H

#include "kmsrequest_p.h"
#include "updateprimaryregionrequest.h"

namespace QtAws {
namespace Kms {

class UpdatePrimaryRegionRequest;

class UpdatePrimaryRegionRequestPrivate : public KmsRequestPrivate {

public:
    UpdatePrimaryRegionRequestPrivate(const KmsRequest::Action action,
                                   UpdatePrimaryRegionRequest * const q);
    UpdatePrimaryRegionRequestPrivate(const UpdatePrimaryRegionRequestPrivate &other,
                                   UpdatePrimaryRegionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePrimaryRegionRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
