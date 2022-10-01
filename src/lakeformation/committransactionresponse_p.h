// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMMITTRANSACTIONRESPONSE_P_H
#define QTAWS_COMMITTRANSACTIONRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class CommitTransactionResponse;

class CommitTransactionResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit CommitTransactionResponsePrivate(CommitTransactionResponse * const q);

    void parseCommitTransactionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CommitTransactionResponse)
    Q_DISABLE_COPY(CommitTransactionResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
