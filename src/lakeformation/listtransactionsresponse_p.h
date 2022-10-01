// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRANSACTIONSRESPONSE_P_H
#define QTAWS_LISTTRANSACTIONSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class ListTransactionsResponse;

class ListTransactionsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit ListTransactionsResponsePrivate(ListTransactionsResponse * const q);

    void parseListTransactionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTransactionsResponse)
    Q_DISABLE_COPY(ListTransactionsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
