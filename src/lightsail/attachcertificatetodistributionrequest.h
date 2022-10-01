// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHCERTIFICATETODISTRIBUTIONREQUEST_H
#define QTAWS_ATTACHCERTIFICATETODISTRIBUTIONREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class AttachCertificateToDistributionRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT AttachCertificateToDistributionRequest : public LightsailRequest {

public:
    AttachCertificateToDistributionRequest(const AttachCertificateToDistributionRequest &other);
    AttachCertificateToDistributionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachCertificateToDistributionRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
