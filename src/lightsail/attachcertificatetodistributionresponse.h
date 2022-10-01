// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHCERTIFICATETODISTRIBUTIONRESPONSE_H
#define QTAWS_ATTACHCERTIFICATETODISTRIBUTIONRESPONSE_H

#include "lightsailresponse.h"
#include "attachcertificatetodistributionrequest.h"

namespace QtAws {
namespace Lightsail {

class AttachCertificateToDistributionResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT AttachCertificateToDistributionResponse : public LightsailResponse {
    Q_OBJECT

public:
    AttachCertificateToDistributionResponse(const AttachCertificateToDistributionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachCertificateToDistributionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachCertificateToDistributionResponse)
    Q_DISABLE_COPY(AttachCertificateToDistributionResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
