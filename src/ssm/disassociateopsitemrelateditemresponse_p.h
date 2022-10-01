// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEOPSITEMRELATEDITEMRESPONSE_P_H
#define QTAWS_DISASSOCIATEOPSITEMRELATEDITEMRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DisassociateOpsItemRelatedItemResponse;

class DisassociateOpsItemRelatedItemResponsePrivate : public SsmResponsePrivate {

public:

    explicit DisassociateOpsItemRelatedItemResponsePrivate(DisassociateOpsItemRelatedItemResponse * const q);

    void parseDisassociateOpsItemRelatedItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateOpsItemRelatedItemResponse)
    Q_DISABLE_COPY(DisassociateOpsItemRelatedItemResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
