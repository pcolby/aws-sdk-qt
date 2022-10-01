// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILIDENTITYREQUEST_H
#define QTAWS_CREATEEMAILIDENTITYREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class CreateEmailIdentityRequestPrivate;

class QTAWSSESV2_EXPORT CreateEmailIdentityRequest : public SESv2Request {

public:
    CreateEmailIdentityRequest(const CreateEmailIdentityRequest &other);
    CreateEmailIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEmailIdentityRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
