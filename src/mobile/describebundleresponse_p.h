// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUNDLERESPONSE_P_H
#define QTAWS_DESCRIBEBUNDLERESPONSE_P_H

#include "mobileresponse_p.h"

namespace QtAws {
namespace Mobile {

class DescribeBundleResponse;

class DescribeBundleResponsePrivate : public MobileResponsePrivate {

public:

    explicit DescribeBundleResponsePrivate(DescribeBundleResponse * const q);

    void parseDescribeBundleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBundleResponse)
    Q_DISABLE_COPY(DescribeBundleResponsePrivate)

};

} // namespace Mobile
} // namespace QtAws

#endif
