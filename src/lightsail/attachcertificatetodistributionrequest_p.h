// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHCERTIFICATETODISTRIBUTIONREQUEST_P_H
#define QTAWS_ATTACHCERTIFICATETODISTRIBUTIONREQUEST_P_H

#include "lightsailrequest_p.h"
#include "attachcertificatetodistributionrequest.h"

namespace QtAws {
namespace Lightsail {

class AttachCertificateToDistributionRequest;

class AttachCertificateToDistributionRequestPrivate : public LightsailRequestPrivate {

public:
    AttachCertificateToDistributionRequestPrivate(const LightsailRequest::Action action,
                                   AttachCertificateToDistributionRequest * const q);
    AttachCertificateToDistributionRequestPrivate(const AttachCertificateToDistributionRequestPrivate &other,
                                   AttachCertificateToDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachCertificateToDistributionRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
