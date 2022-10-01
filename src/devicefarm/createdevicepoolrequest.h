// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEPOOLREQUEST_H
#define QTAWS_CREATEDEVICEPOOLREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateDevicePoolRequestPrivate;

class QTAWSDEVICEFARM_EXPORT CreateDevicePoolRequest : public DeviceFarmRequest {

public:
    CreateDevicePoolRequest(const CreateDevicePoolRequest &other);
    CreateDevicePoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDevicePoolRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
