// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOFFERINGSTATUSREQUEST_H
#define QTAWS_GETOFFERINGSTATUSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetOfferingStatusRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetOfferingStatusRequest : public DeviceFarmRequest {

public:
    GetOfferingStatusRequest(const GetOfferingStatusRequest &other);
    GetOfferingStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOfferingStatusRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
