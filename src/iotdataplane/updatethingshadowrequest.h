// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGSHADOWREQUEST_H
#define QTAWS_UPDATETHINGSHADOWREQUEST_H

#include "iotdataplanerequest.h"

namespace QtAws {
namespace IoTDataPlane {

class UpdateThingShadowRequestPrivate;

class QTAWSIOTDATAPLANE_EXPORT UpdateThingShadowRequest : public IoTDataPlaneRequest {

public:
    UpdateThingShadowRequest(const UpdateThingShadowRequest &other);
    UpdateThingShadowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThingShadowRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
