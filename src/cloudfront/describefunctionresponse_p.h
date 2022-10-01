// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFUNCTIONRESPONSE_P_H
#define QTAWS_DESCRIBEFUNCTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DescribeFunctionResponse;

class DescribeFunctionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DescribeFunctionResponsePrivate(DescribeFunctionResponse * const q);

    void parseDescribeFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFunctionResponse)
    Q_DISABLE_COPY(DescribeFunctionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
