// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFILEREQUEST_H
#define QTAWS_GETFILEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetFileRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetFileRequest : public CodeCommitRequest {

public:
    GetFileRequest(const GetFileRequest &other);
    GetFileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFileRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
