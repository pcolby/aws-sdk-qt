// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBRANCHREQUEST_H
#define QTAWS_DELETEBRANCHREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteBranchRequestPrivate;

class QTAWSCODECOMMIT_EXPORT DeleteBranchRequest : public CodeCommitRequest {

public:
    DeleteBranchRequest(const DeleteBranchRequest &other);
    DeleteBranchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBranchRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
