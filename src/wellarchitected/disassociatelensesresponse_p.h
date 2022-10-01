// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELENSESRESPONSE_P_H
#define QTAWS_DISASSOCIATELENSESRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class DisassociateLensesResponse;

class DisassociateLensesResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit DisassociateLensesResponsePrivate(DisassociateLensesResponse * const q);

    void parseDisassociateLensesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateLensesResponse)
    Q_DISABLE_COPY(DisassociateLensesResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
