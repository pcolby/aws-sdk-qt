// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETV2LOGGINGLEVELREQUEST_H
#define QTAWS_SETV2LOGGINGLEVELREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class SetV2LoggingLevelRequestPrivate;

class QTAWSIOT_EXPORT SetV2LoggingLevelRequest : public IoTRequest {

public:
    SetV2LoggingLevelRequest(const SetV2LoggingLevelRequest &other);
    SetV2LoggingLevelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetV2LoggingLevelRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
