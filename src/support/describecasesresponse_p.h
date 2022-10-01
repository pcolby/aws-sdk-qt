// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECASESRESPONSE_P_H
#define QTAWS_DESCRIBECASESRESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class DescribeCasesResponse;

class DescribeCasesResponsePrivate : public SupportResponsePrivate {

public:

    explicit DescribeCasesResponsePrivate(DescribeCasesResponse * const q);

    void parseDescribeCasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCasesResponse)
    Q_DISABLE_COPY(DescribeCasesResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif
