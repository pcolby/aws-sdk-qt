// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMMITTRANSACTIONRESPONSE_P_H
#define QTAWS_COMMITTRANSACTIONRESPONSE_P_H

#include "rdsdataresponse_p.h"

namespace QtAws {
namespace RdsData {

class CommitTransactionResponse;

class CommitTransactionResponsePrivate : public RdsDataResponsePrivate {

public:

    explicit CommitTransactionResponsePrivate(CommitTransactionResponse * const q);

    void parseCommitTransactionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CommitTransactionResponse)
    Q_DISABLE_COPY(CommitTransactionResponsePrivate)

};

} // namespace RdsData
} // namespace QtAws

#endif
