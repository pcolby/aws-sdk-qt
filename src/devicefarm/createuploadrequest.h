// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPLOADREQUEST_H
#define QTAWS_CREATEUPLOADREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateUploadRequestPrivate;

class QTAWSDEVICEFARM_EXPORT CreateUploadRequest : public DeviceFarmRequest {

public:
    CreateUploadRequest(const CreateUploadRequest &other);
    CreateUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUploadRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
