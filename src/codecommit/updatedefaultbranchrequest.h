// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEFAULTBRANCHREQUEST_H
#define QTAWS_UPDATEDEFAULTBRANCHREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateDefaultBranchRequestPrivate;

class QTAWSCODECOMMIT_EXPORT UpdateDefaultBranchRequest : public CodeCommitRequest {

public:
    UpdateDefaultBranchRequest(const UpdateDefaultBranchRequest &other);
    UpdateDefaultBranchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDefaultBranchRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
