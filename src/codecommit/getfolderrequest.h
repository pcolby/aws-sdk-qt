// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFOLDERREQUEST_H
#define QTAWS_GETFOLDERREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetFolderRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetFolderRequest : public CodeCommitRequest {

public:
    GetFolderRequest(const GetFolderRequest &other);
    GetFolderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFolderRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
