// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAVINGSPLANSRESPONSE_P_H
#define QTAWS_SAVINGSPLANSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SavingsPlans {

class SavingsPlansResponse;

class SavingsPlansResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SavingsPlansResponsePrivate(SavingsPlansResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SavingsPlansResponse)
    Q_DISABLE_COPY(SavingsPlansResponsePrivate)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
