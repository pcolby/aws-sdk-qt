// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHTHINGPRINCIPALREQUEST_H
#define QTAWS_DETACHTHINGPRINCIPALREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DetachThingPrincipalRequestPrivate;

class QTAWSIOT_EXPORT DetachThingPrincipalRequest : public IoTRequest {

public:
    DetachThingPrincipalRequest(const DetachThingPrincipalRequest &other);
    DetachThingPrincipalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachThingPrincipalRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
