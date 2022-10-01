// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPOSITORYDESCRIPTIONREQUEST_H
#define QTAWS_UPDATEREPOSITORYDESCRIPTIONREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateRepositoryDescriptionRequestPrivate;

class QTAWSCODECOMMIT_EXPORT UpdateRepositoryDescriptionRequest : public CodeCommitRequest {

public:
    UpdateRepositoryDescriptionRequest(const UpdateRepositoryDescriptionRequest &other);
    UpdateRepositoryDescriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRepositoryDescriptionRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
