// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKIFPHONENUMBERISOPTEDOUTREQUEST_H
#define QTAWS_CHECKIFPHONENUMBERISOPTEDOUTREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class CheckIfPhoneNumberIsOptedOutRequestPrivate;

class QTAWSSNS_EXPORT CheckIfPhoneNumberIsOptedOutRequest : public SnsRequest {

public:
    CheckIfPhoneNumberIsOptedOutRequest(const CheckIfPhoneNumberIsOptedOutRequest &other);
    CheckIfPhoneNumberIsOptedOutRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckIfPhoneNumberIsOptedOutRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
