// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCECREDITSPECIFICATIONRESPONSE_P_H
#define QTAWS_MODIFYINSTANCECREDITSPECIFICATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceCreditSpecificationResponse;

class ModifyInstanceCreditSpecificationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyInstanceCreditSpecificationResponsePrivate(ModifyInstanceCreditSpecificationResponse * const q);

    void parseModifyInstanceCreditSpecificationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceCreditSpecificationResponse)
    Q_DISABLE_COPY(ModifyInstanceCreditSpecificationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
