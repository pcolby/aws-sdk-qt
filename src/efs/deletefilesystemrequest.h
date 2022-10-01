// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESYSTEMREQUEST_H
#define QTAWS_DELETEFILESYSTEMREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class DeleteFileSystemRequestPrivate;

class QTAWSEFS_EXPORT DeleteFileSystemRequest : public EfsRequest {

public:
    DeleteFileSystemRequest(const DeleteFileSystemRequest &other);
    DeleteFileSystemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFileSystemRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
