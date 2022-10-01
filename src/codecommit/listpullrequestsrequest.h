// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPULLREQUESTSREQUEST_H
#define QTAWS_LISTPULLREQUESTSREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListPullRequestsRequestPrivate;

class QTAWSCODECOMMIT_EXPORT ListPullRequestsRequest : public CodeCommitRequest {

public:
    ListPullRequestsRequest(const ListPullRequestsRequest &other);
    ListPullRequestsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPullRequestsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
