// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCHECKLAYERAVAILABILITYREQUEST_P_H
#define QTAWS_BATCHCHECKLAYERAVAILABILITYREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "batchchecklayeravailabilityrequest.h"

namespace QtAws {
namespace EcrPublic {

class BatchCheckLayerAvailabilityRequest;

class BatchCheckLayerAvailabilityRequestPrivate : public EcrPublicRequestPrivate {

public:
    BatchCheckLayerAvailabilityRequestPrivate(const EcrPublicRequest::Action action,
                                   BatchCheckLayerAvailabilityRequest * const q);
    BatchCheckLayerAvailabilityRequestPrivate(const BatchCheckLayerAvailabilityRequestPrivate &other,
                                   BatchCheckLayerAvailabilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchCheckLayerAvailabilityRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
