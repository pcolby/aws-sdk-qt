// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEBRANCHESBYSQUASHREQUEST_H
#define QTAWS_MERGEBRANCHESBYSQUASHREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergeBranchesBySquashRequestPrivate;

class QTAWSCODECOMMIT_EXPORT MergeBranchesBySquashRequest : public CodeCommitRequest {

public:
    MergeBranchesBySquashRequest(const MergeBranchesBySquashRequest &other);
    MergeBranchesBySquashRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergeBranchesBySquashRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
