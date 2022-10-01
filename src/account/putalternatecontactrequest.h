// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTALTERNATECONTACTREQUEST_H
#define QTAWS_PUTALTERNATECONTACTREQUEST_H

#include "accountrequest.h"

namespace QtAws {
namespace Account {

class PutAlternateContactRequestPrivate;

class QTAWSACCOUNT_EXPORT PutAlternateContactRequest : public AccountRequest {

public:
    PutAlternateContactRequest(const PutAlternateContactRequest &other);
    PutAlternateContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAlternateContactRequest)

};

} // namespace Account
} // namespace QtAws

#endif
