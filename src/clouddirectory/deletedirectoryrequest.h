// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTORYREQUEST_H
#define QTAWS_DELETEDIRECTORYREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DeleteDirectoryRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DeleteDirectoryRequest : public CloudDirectoryRequest {

public:
    DeleteDirectoryRequest(const DeleteDirectoryRequest &other);
    DeleteDirectoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDirectoryRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
