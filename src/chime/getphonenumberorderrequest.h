// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPHONENUMBERORDERREQUEST_H
#define QTAWS_GETPHONENUMBERORDERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberOrderRequestPrivate;

class QTAWSCHIME_EXPORT GetPhoneNumberOrderRequest : public ChimeRequest {

public:
    GetPhoneNumberOrderRequest(const GetPhoneNumberOrderRequest &other);
    GetPhoneNumberOrderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPhoneNumberOrderRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
