// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONRESPONSE_H
#define QTAWS_CREATEDISTRIBUTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "createdistributionrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateDistributionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateDistributionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateDistributionResponse(const CreateDistributionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDistributionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDistributionResponse)
    Q_DISABLE_COPY(CreateDistributionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
