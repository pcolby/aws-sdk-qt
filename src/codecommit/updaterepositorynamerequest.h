// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPOSITORYNAMEREQUEST_H
#define QTAWS_UPDATEREPOSITORYNAMEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateRepositoryNameRequestPrivate;

class QTAWSCODECOMMIT_EXPORT UpdateRepositoryNameRequest : public CodeCommitRequest {

public:
    UpdateRepositoryNameRequest(const UpdateRepositoryNameRequest &other);
    UpdateRepositoryNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRepositoryNameRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
