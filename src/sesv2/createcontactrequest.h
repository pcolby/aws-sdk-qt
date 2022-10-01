// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTREQUEST_H
#define QTAWS_CREATECONTACTREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class CreateContactRequestPrivate;

class QTAWSSESV2_EXPORT CreateContactRequest : public SESv2Request {

public:
    CreateContactRequest(const CreateContactRequest &other);
    CreateContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContactRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
