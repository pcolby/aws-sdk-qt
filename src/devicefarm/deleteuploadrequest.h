// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUPLOADREQUEST_H
#define QTAWS_DELETEUPLOADREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteUploadRequestPrivate;

class QTAWSDEVICEFARM_EXPORT DeleteUploadRequest : public DeviceFarmRequest {

public:
    DeleteUploadRequest(const DeleteUploadRequest &other);
    DeleteUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUploadRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
