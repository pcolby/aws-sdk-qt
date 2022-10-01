// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEPROFILEREQUEST_H
#define QTAWS_GETINSTANCEPROFILEREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetInstanceProfileRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetInstanceProfileRequest : public DeviceFarmRequest {

public:
    GetInstanceProfileRequest(const GetInstanceProfileRequest &other);
    GetInstanceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
