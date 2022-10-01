// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUPLOADREQUEST_H
#define QTAWS_UPDATEUPLOADREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateUploadRequestPrivate;

class QTAWSDEVICEFARM_EXPORT UpdateUploadRequest : public DeviceFarmRequest {

public:
    UpdateUploadRequest(const UpdateUploadRequest &other);
    UpdateUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUploadRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
