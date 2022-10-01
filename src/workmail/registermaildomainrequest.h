// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERMAILDOMAINREQUEST_H
#define QTAWS_REGISTERMAILDOMAINREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class RegisterMailDomainRequestPrivate;

class QTAWSWORKMAIL_EXPORT RegisterMailDomainRequest : public WorkMailRequest {

public:
    RegisterMailDomainRequest(const RegisterMailDomainRequest &other);
    RegisterMailDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterMailDomainRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
