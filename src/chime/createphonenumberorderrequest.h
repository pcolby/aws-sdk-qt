// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPHONENUMBERORDERREQUEST_H
#define QTAWS_CREATEPHONENUMBERORDERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreatePhoneNumberOrderRequestPrivate;

class QTAWSCHIME_EXPORT CreatePhoneNumberOrderRequest : public ChimeRequest {

public:
    CreatePhoneNumberOrderRequest(const CreatePhoneNumberOrderRequest &other);
    CreatePhoneNumberOrderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePhoneNumberOrderRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
