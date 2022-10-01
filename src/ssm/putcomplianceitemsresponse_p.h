// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMPLIANCEITEMSRESPONSE_P_H
#define QTAWS_PUTCOMPLIANCEITEMSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class PutComplianceItemsResponse;

class PutComplianceItemsResponsePrivate : public SsmResponsePrivate {

public:

    explicit PutComplianceItemsResponsePrivate(PutComplianceItemsResponse * const q);

    void parsePutComplianceItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutComplianceItemsResponse)
    Q_DISABLE_COPY(PutComplianceItemsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
