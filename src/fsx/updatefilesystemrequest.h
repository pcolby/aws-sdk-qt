// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFILESYSTEMREQUEST_H
#define QTAWS_UPDATEFILESYSTEMREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class UpdateFileSystemRequestPrivate;

class QTAWSFSX_EXPORT UpdateFileSystemRequest : public FSxRequest {

public:
    UpdateFileSystemRequest(const UpdateFileSystemRequest &other);
    UpdateFileSystemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFileSystemRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
