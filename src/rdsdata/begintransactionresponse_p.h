// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BEGINTRANSACTIONRESPONSE_P_H
#define QTAWS_BEGINTRANSACTIONRESPONSE_P_H

#include "rdsdataresponse_p.h"

namespace QtAws {
namespace RdsData {

class BeginTransactionResponse;

class BeginTransactionResponsePrivate : public RdsDataResponsePrivate {

public:

    explicit BeginTransactionResponsePrivate(BeginTransactionResponse * const q);

    void parseBeginTransactionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BeginTransactionResponse)
    Q_DISABLE_COPY(BeginTransactionResponsePrivate)

};

} // namespace RdsData
} // namespace QtAws

#endif
