// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPULLREQUESTBYSQUASHREQUEST_H
#define QTAWS_MERGEPULLREQUESTBYSQUASHREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestBySquashRequestPrivate;

class QTAWSCODECOMMIT_EXPORT MergePullRequestBySquashRequest : public CodeCommitRequest {

public:
    MergePullRequestBySquashRequest(const MergePullRequestBySquashRequest &other);
    MergePullRequestBySquashRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergePullRequestBySquashRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
