// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISTRIBUTIONRESPONSE_P_H
#define QTAWS_DELETEDISTRIBUTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteDistributionResponse;

class DeleteDistributionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteDistributionResponsePrivate(DeleteDistributionResponse * const q);

    void parseDeleteDistributionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDistributionResponse)
    Q_DISABLE_COPY(DeleteDistributionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
