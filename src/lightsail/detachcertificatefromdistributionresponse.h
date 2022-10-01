// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHCERTIFICATEFROMDISTRIBUTIONRESPONSE_H
#define QTAWS_DETACHCERTIFICATEFROMDISTRIBUTIONRESPONSE_H

#include "lightsailresponse.h"
#include "detachcertificatefromdistributionrequest.h"

namespace QtAws {
namespace Lightsail {

class DetachCertificateFromDistributionResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DetachCertificateFromDistributionResponse : public LightsailResponse {
    Q_OBJECT

public:
    DetachCertificateFromDistributionResponse(const DetachCertificateFromDistributionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachCertificateFromDistributionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachCertificateFromDistributionResponse)
    Q_DISABLE_COPY(DetachCertificateFromDistributionResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
