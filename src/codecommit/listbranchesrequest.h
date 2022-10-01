// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBRANCHESREQUEST_H
#define QTAWS_LISTBRANCHESREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class ListBranchesRequestPrivate;

class QTAWSCODECOMMIT_EXPORT ListBranchesRequest : public CodeCommitRequest {

public:
    ListBranchesRequest(const ListBranchesRequest &other);
    ListBranchesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBranchesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
