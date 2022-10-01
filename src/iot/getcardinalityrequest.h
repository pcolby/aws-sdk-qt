// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCARDINALITYREQUEST_H
#define QTAWS_GETCARDINALITYREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetCardinalityRequestPrivate;

class QTAWSIOT_EXPORT GetCardinalityRequest : public IoTRequest {

public:
    GetCardinalityRequest(const GetCardinalityRequest &other);
    GetCardinalityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCardinalityRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
