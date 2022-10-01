// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILEREQUEST_H
#define QTAWS_DELETEFILEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteFileRequestPrivate;

class QTAWSCODECOMMIT_EXPORT DeleteFileRequest : public CodeCommitRequest {

public:
    DeleteFileRequest(const DeleteFileRequest &other);
    DeleteFileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFileRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
