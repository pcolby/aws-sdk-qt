// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEBRANCHESBYSQUASHRESPONSE_H
#define QTAWS_MERGEBRANCHESBYSQUASHRESPONSE_H

#include "codecommitresponse.h"
#include "mergebranchesbysquashrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergeBranchesBySquashResponsePrivate;

class QTAWSCODECOMMIT_EXPORT MergeBranchesBySquashResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    MergeBranchesBySquashResponse(const MergeBranchesBySquashRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MergeBranchesBySquashRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergeBranchesBySquashResponse)
    Q_DISABLE_COPY(MergeBranchesBySquashResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
