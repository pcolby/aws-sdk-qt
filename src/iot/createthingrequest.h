// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHINGREQUEST_H
#define QTAWS_CREATETHINGREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateThingRequestPrivate;

class QTAWSIOT_EXPORT CreateThingRequest : public IoTRequest {

public:
    CreateThingRequest(const CreateThingRequest &other);
    CreateThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
