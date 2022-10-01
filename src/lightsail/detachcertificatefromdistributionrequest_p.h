// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHCERTIFICATEFROMDISTRIBUTIONREQUEST_P_H
#define QTAWS_DETACHCERTIFICATEFROMDISTRIBUTIONREQUEST_P_H

#include "lightsailrequest_p.h"
#include "detachcertificatefromdistributionrequest.h"

namespace QtAws {
namespace Lightsail {

class DetachCertificateFromDistributionRequest;

class DetachCertificateFromDistributionRequestPrivate : public LightsailRequestPrivate {

public:
    DetachCertificateFromDistributionRequestPrivate(const LightsailRequest::Action action,
                                   DetachCertificateFromDistributionRequest * const q);
    DetachCertificateFromDistributionRequestPrivate(const DetachCertificateFromDistributionRequestPrivate &other,
                                   DetachCertificateFromDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachCertificateFromDistributionRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
