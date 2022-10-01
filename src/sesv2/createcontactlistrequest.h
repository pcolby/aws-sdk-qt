// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTLISTREQUEST_H
#define QTAWS_CREATECONTACTLISTREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class CreateContactListRequestPrivate;

class QTAWSSESV2_EXPORT CreateContactListRequest : public SESv2Request {

public:
    CreateContactListRequest(const CreateContactListRequest &other);
    CreateContactListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContactListRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
