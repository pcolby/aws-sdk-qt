// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCUSTOMVERIFICATIONEMAILREQUEST_H
#define QTAWS_SENDCUSTOMVERIFICATIONEMAILREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class SendCustomVerificationEmailRequestPrivate;

class QTAWSSES_EXPORT SendCustomVerificationEmailRequest : public SesRequest {

public:
    SendCustomVerificationEmailRequest(const SendCustomVerificationEmailRequest &other);
    SendCustomVerificationEmailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendCustomVerificationEmailRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
