// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTRANSACTIONRESPONSE_P_H
#define QTAWS_STARTTRANSACTIONRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class StartTransactionResponse;

class StartTransactionResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit StartTransactionResponsePrivate(StartTransactionResponse * const q);

    void parseStartTransactionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartTransactionResponse)
    Q_DISABLE_COPY(StartTransactionResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
