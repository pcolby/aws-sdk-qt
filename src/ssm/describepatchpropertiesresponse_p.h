// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHPROPERTIESRESPONSE_P_H
#define QTAWS_DESCRIBEPATCHPROPERTIESRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribePatchPropertiesResponse;

class DescribePatchPropertiesResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribePatchPropertiesResponsePrivate(DescribePatchPropertiesResponse * const q);

    void parseDescribePatchPropertiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePatchPropertiesResponse)
    Q_DISABLE_COPY(DescribePatchPropertiesResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
