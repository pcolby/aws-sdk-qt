// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCONTACTMETHODVERIFICATIONREQUEST_H
#define QTAWS_SENDCONTACTMETHODVERIFICATIONREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class SendContactMethodVerificationRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT SendContactMethodVerificationRequest : public LightsailRequest {

public:
    SendContactMethodVerificationRequest(const SendContactMethodVerificationRequest &other);
    SendContactMethodVerificationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendContactMethodVerificationRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
