// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEBRANCHESBYFASTFORWARDRESPONSE_H
#define QTAWS_MERGEBRANCHESBYFASTFORWARDRESPONSE_H

#include "codecommitresponse.h"
#include "mergebranchesbyfastforwardrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergeBranchesByFastForwardResponsePrivate;

class QTAWSCODECOMMIT_EXPORT MergeBranchesByFastForwardResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    MergeBranchesByFastForwardResponse(const MergeBranchesByFastForwardRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MergeBranchesByFastForwardRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergeBranchesByFastForwardResponse)
    Q_DISABLE_COPY(MergeBranchesByFastForwardResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
