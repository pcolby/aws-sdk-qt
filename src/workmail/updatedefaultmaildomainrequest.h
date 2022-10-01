// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEFAULTMAILDOMAINREQUEST_H
#define QTAWS_UPDATEDEFAULTMAILDOMAINREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateDefaultMailDomainRequestPrivate;

class QTAWSWORKMAIL_EXPORT UpdateDefaultMailDomainRequest : public WorkMailRequest {

public:
    UpdateDefaultMailDomainRequest(const UpdateDefaultMailDomainRequest &other);
    UpdateDefaultMailDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDefaultMailDomainRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
