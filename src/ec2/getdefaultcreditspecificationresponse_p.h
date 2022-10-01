// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEFAULTCREDITSPECIFICATIONRESPONSE_P_H
#define QTAWS_GETDEFAULTCREDITSPECIFICATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetDefaultCreditSpecificationResponse;

class GetDefaultCreditSpecificationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetDefaultCreditSpecificationResponsePrivate(GetDefaultCreditSpecificationResponse * const q);

    void parseGetDefaultCreditSpecificationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDefaultCreditSpecificationResponse)
    Q_DISABLE_COPY(GetDefaultCreditSpecificationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
