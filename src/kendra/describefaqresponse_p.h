// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFAQRESPONSE_P_H
#define QTAWS_DESCRIBEFAQRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DescribeFaqResponse;

class DescribeFaqResponsePrivate : public KendraResponsePrivate {

public:

    explicit DescribeFaqResponsePrivate(DescribeFaqResponse * const q);

    void parseDescribeFaqResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFaqResponse)
    Q_DISABLE_COPY(DescribeFaqResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
