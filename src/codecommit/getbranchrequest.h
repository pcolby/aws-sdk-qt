// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBRANCHREQUEST_H
#define QTAWS_GETBRANCHREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetBranchRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetBranchRequest : public CodeCommitRequest {

public:
    GetBranchRequest(const GetBranchRequest &other);
    GetBranchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBranchRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
