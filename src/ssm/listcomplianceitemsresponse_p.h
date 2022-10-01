// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPLIANCEITEMSRESPONSE_P_H
#define QTAWS_LISTCOMPLIANCEITEMSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListComplianceItemsResponse;

class ListComplianceItemsResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListComplianceItemsResponsePrivate(ListComplianceItemsResponse * const q);

    void parseListComplianceItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListComplianceItemsResponse)
    Q_DISABLE_COPY(ListComplianceItemsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
