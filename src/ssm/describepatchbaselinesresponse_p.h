// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHBASELINESRESPONSE_P_H
#define QTAWS_DESCRIBEPATCHBASELINESRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribePatchBaselinesResponse;

class DescribePatchBaselinesResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribePatchBaselinesResponsePrivate(DescribePatchBaselinesResponse * const q);

    void parseDescribePatchBaselinesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePatchBaselinesResponse)
    Q_DISABLE_COPY(DescribePatchBaselinesResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
