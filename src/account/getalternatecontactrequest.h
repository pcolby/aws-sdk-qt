// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETALTERNATECONTACTREQUEST_H
#define QTAWS_GETALTERNATECONTACTREQUEST_H

#include "accountrequest.h"

namespace QtAws {
namespace Account {

class GetAlternateContactRequestPrivate;

class QTAWSACCOUNT_EXPORT GetAlternateContactRequest : public AccountRequest {

public:
    GetAlternateContactRequest(const GetAlternateContactRequest &other);
    GetAlternateContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAlternateContactRequest)

};

} // namespace Account
} // namespace QtAws

#endif
