// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEOPSITEMRELATEDITEMRESPONSE_P_H
#define QTAWS_ASSOCIATEOPSITEMRELATEDITEMRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class AssociateOpsItemRelatedItemResponse;

class AssociateOpsItemRelatedItemResponsePrivate : public SsmResponsePrivate {

public:

    explicit AssociateOpsItemRelatedItemResponsePrivate(AssociateOpsItemRelatedItemResponse * const q);

    void parseAssociateOpsItemRelatedItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateOpsItemRelatedItemResponse)
    Q_DISABLE_COPY(AssociateOpsItemRelatedItemResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
