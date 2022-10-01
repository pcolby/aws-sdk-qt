// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILESYSTEMFROMBACKUPREQUEST_H
#define QTAWS_CREATEFILESYSTEMFROMBACKUPREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class CreateFileSystemFromBackupRequestPrivate;

class QTAWSFSX_EXPORT CreateFileSystemFromBackupRequest : public FSxRequest {

public:
    CreateFileSystemFromBackupRequest(const CreateFileSystemFromBackupRequest &other);
    CreateFileSystemFromBackupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFileSystemFromBackupRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
