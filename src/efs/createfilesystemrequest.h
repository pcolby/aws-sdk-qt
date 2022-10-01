// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILESYSTEMREQUEST_H
#define QTAWS_CREATEFILESYSTEMREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class CreateFileSystemRequestPrivate;

class QTAWSEFS_EXPORT CreateFileSystemRequest : public EfsRequest {

public:
    CreateFileSystemRequest(const CreateFileSystemRequest &other);
    CreateFileSystemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFileSystemRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
