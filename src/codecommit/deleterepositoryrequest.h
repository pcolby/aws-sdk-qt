// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYREQUEST_H
#define QTAWS_DELETEREPOSITORYREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteRepositoryRequestPrivate;

class QTAWSCODECOMMIT_EXPORT DeleteRepositoryRequest : public CodeCommitRequest {

public:
    DeleteRepositoryRequest(const DeleteRepositoryRequest &other);
    DeleteRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRepositoryRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
