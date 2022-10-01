// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONRESPONSE_P_H
#define QTAWS_CREATEDISTRIBUTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateDistributionResponse;

class CreateDistributionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateDistributionResponsePrivate(CreateDistributionResponse * const q);

    void parseCreateDistributionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDistributionResponse)
    Q_DISABLE_COPY(CreateDistributionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
