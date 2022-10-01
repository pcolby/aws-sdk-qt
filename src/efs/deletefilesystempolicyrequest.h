// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESYSTEMPOLICYREQUEST_H
#define QTAWS_DELETEFILESYSTEMPOLICYREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class DeleteFileSystemPolicyRequestPrivate;

class QTAWSEFS_EXPORT DeleteFileSystemPolicyRequest : public EfsRequest {

public:
    DeleteFileSystemPolicyRequest(const DeleteFileSystemPolicyRequest &other);
    DeleteFileSystemPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFileSystemPolicyRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
