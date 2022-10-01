// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHTHINGPRINCIPALREQUEST_H
#define QTAWS_ATTACHTHINGPRINCIPALREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class AttachThingPrincipalRequestPrivate;

class QTAWSIOT_EXPORT AttachThingPrincipalRequest : public IoTRequest {

public:
    AttachThingPrincipalRequest(const AttachThingPrincipalRequest &other);
    AttachThingPrincipalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachThingPrincipalRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
