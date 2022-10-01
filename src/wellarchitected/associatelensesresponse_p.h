// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELENSESRESPONSE_P_H
#define QTAWS_ASSOCIATELENSESRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class AssociateLensesResponse;

class AssociateLensesResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit AssociateLensesResponsePrivate(AssociateLensesResponse * const q);

    void parseAssociateLensesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateLensesResponse)
    Q_DISABLE_COPY(AssociateLensesResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
