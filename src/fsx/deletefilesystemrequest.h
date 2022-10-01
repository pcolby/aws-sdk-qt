// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESYSTEMREQUEST_H
#define QTAWS_DELETEFILESYSTEMREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class DeleteFileSystemRequestPrivate;

class QTAWSFSX_EXPORT DeleteFileSystemRequest : public FSxRequest {

public:
    DeleteFileSystemRequest(const DeleteFileSystemRequest &other);
    DeleteFileSystemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFileSystemRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
