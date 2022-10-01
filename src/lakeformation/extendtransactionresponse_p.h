// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXTENDTRANSACTIONRESPONSE_P_H
#define QTAWS_EXTENDTRANSACTIONRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class ExtendTransactionResponse;

class ExtendTransactionResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit ExtendTransactionResponsePrivate(ExtendTransactionResponse * const q);

    void parseExtendTransactionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExtendTransactionResponse)
    Q_DISABLE_COPY(ExtendTransactionResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
