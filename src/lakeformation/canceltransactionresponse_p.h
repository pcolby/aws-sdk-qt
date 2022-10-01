// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELTRANSACTIONRESPONSE_P_H
#define QTAWS_CANCELTRANSACTIONRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class CancelTransactionResponse;

class CancelTransactionResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit CancelTransactionResponsePrivate(CancelTransactionResponse * const q);

    void parseCancelTransactionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelTransactionResponse)
    Q_DISABLE_COPY(CancelTransactionResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
