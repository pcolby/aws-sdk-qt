// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHINGSHADOWREQUEST_H
#define QTAWS_GETTHINGSHADOWREQUEST_H

#include "iotdataplanerequest.h"

namespace QtAws {
namespace IoTDataPlane {

class GetThingShadowRequestPrivate;

class QTAWSIOTDATAPLANE_EXPORT GetThingShadowRequest : public IoTDataPlaneRequest {

public:
    GetThingShadowRequest(const GetThingShadowRequest &other);
    GetThingShadowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetThingShadowRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
