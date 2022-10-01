// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDRTACCESSRESPONSE_P_H
#define QTAWS_DESCRIBEDRTACCESSRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DescribeDRTAccessResponse;

class DescribeDRTAccessResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DescribeDRTAccessResponsePrivate(DescribeDRTAccessResponse * const q);

    void parseDescribeDRTAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDRTAccessResponse)
    Q_DISABLE_COPY(DescribeDRTAccessResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
