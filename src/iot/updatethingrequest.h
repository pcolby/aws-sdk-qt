// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGREQUEST_H
#define QTAWS_UPDATETHINGREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateThingRequestPrivate;

class QTAWSIOT_EXPORT UpdateThingRequest : public IoTRequest {

public:
    UpdateThingRequest(const UpdateThingRequest &other);
    UpdateThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
