// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYREQUEST_H
#define QTAWS_GETREPOSITORYREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetRepositoryRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetRepositoryRequest : public CodeCommitRequest {

public:
    GetRepositoryRequest(const GetRepositoryRequest &other);
    GetRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositoryRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
