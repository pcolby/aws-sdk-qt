// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMPHONENUMBERREQUEST_H
#define QTAWS_CLAIMPHONENUMBERREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ClaimPhoneNumberRequestPrivate;

class QTAWSCONNECT_EXPORT ClaimPhoneNumberRequest : public ConnectRequest {

public:
    ClaimPhoneNumberRequest(const ClaimPhoneNumberRequest &other);
    ClaimPhoneNumberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ClaimPhoneNumberRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
