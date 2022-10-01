// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESAVINGSPLANSRESPONSE_P_H
#define QTAWS_DESCRIBESAVINGSPLANSRESPONSE_P_H

#include "savingsplansresponse_p.h"

namespace QtAws {
namespace SavingsPlans {

class DescribeSavingsPlansResponse;

class DescribeSavingsPlansResponsePrivate : public SavingsPlansResponsePrivate {

public:

    explicit DescribeSavingsPlansResponsePrivate(DescribeSavingsPlansResponse * const q);

    void parseDescribeSavingsPlansResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSavingsPlansResponse)
    Q_DISABLE_COPY(DescribeSavingsPlansResponsePrivate)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
