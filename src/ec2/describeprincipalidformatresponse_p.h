// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRINCIPALIDFORMATRESPONSE_P_H
#define QTAWS_DESCRIBEPRINCIPALIDFORMATRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribePrincipalIdFormatResponse;

class DescribePrincipalIdFormatResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribePrincipalIdFormatResponsePrivate(DescribePrincipalIdFormatResponse * const q);

    void parseDescribePrincipalIdFormatResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePrincipalIdFormatResponse)
    Q_DISABLE_COPY(DescribePrincipalIdFormatResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
