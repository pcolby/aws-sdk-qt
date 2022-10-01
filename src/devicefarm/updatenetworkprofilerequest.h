// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKPROFILEREQUEST_H
#define QTAWS_UPDATENETWORKPROFILEREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateNetworkProfileRequestPrivate;

class QTAWSDEVICEFARM_EXPORT UpdateNetworkProfileRequest : public DeviceFarmRequest {

public:
    UpdateNetworkProfileRequest(const UpdateNetworkProfileRequest &other);
    UpdateNetworkProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNetworkProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
