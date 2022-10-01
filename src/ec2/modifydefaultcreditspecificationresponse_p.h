// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDEFAULTCREDITSPECIFICATIONRESPONSE_P_H
#define QTAWS_MODIFYDEFAULTCREDITSPECIFICATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyDefaultCreditSpecificationResponse;

class ModifyDefaultCreditSpecificationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyDefaultCreditSpecificationResponsePrivate(ModifyDefaultCreditSpecificationResponse * const q);

    void parseModifyDefaultCreditSpecificationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDefaultCreditSpecificationResponse)
    Q_DISABLE_COPY(ModifyDefaultCreditSpecificationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
