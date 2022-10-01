// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPLOADREQUEST_H
#define QTAWS_GETUPLOADREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetUploadRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetUploadRequest : public DeviceFarmRequest {

public:
    GetUploadRequest(const GetUploadRequest &other);
    GetUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUploadRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
