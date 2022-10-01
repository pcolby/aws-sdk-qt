// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEPROFILEREQUEST_H
#define QTAWS_UPDATEINSTANCEPROFILEREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateInstanceProfileRequestPrivate;

class QTAWSDEVICEFARM_EXPORT UpdateInstanceProfileRequest : public DeviceFarmRequest {

public:
    UpdateInstanceProfileRequest(const UpdateInstanceProfileRequest &other);
    UpdateInstanceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInstanceProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
