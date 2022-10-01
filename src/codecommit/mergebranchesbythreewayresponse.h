// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEBRANCHESBYTHREEWAYRESPONSE_H
#define QTAWS_MERGEBRANCHESBYTHREEWAYRESPONSE_H

#include "codecommitresponse.h"
#include "mergebranchesbythreewayrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergeBranchesByThreeWayResponsePrivate;

class QTAWSCODECOMMIT_EXPORT MergeBranchesByThreeWayResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    MergeBranchesByThreeWayResponse(const MergeBranchesByThreeWayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MergeBranchesByThreeWayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergeBranchesByThreeWayResponse)
    Q_DISABLE_COPY(MergeBranchesByThreeWayResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
