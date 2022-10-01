// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATETHINGTYPEREQUEST_H
#define QTAWS_DEPRECATETHINGTYPEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeprecateThingTypeRequestPrivate;

class QTAWSIOT_EXPORT DeprecateThingTypeRequest : public IoTRequest {

public:
    DeprecateThingTypeRequest(const DeprecateThingTypeRequest &other);
    DeprecateThingTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprecateThingTypeRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
