// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERSRESPONSE_P_H

#include "cloudhsmv2response_p.h"

namespace QtAws {
namespace CloudHsmV2 {

class DescribeClustersResponse;

class DescribeClustersResponsePrivate : public CloudHsmV2ResponsePrivate {

public:

    explicit DescribeClustersResponsePrivate(DescribeClustersResponse * const q);

    void parseDescribeClustersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClustersResponse)
    Q_DISABLE_COPY(DescribeClustersResponsePrivate)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
