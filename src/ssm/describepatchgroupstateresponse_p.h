// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHGROUPSTATERESPONSE_P_H
#define QTAWS_DESCRIBEPATCHGROUPSTATERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribePatchGroupStateResponse;

class DescribePatchGroupStateResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribePatchGroupStateResponsePrivate(DescribePatchGroupStateResponse * const q);

    void parseDescribePatchGroupStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePatchGroupStateResponse)
    Q_DISABLE_COPY(DescribePatchGroupStateResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
