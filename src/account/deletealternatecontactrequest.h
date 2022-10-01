// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALTERNATECONTACTREQUEST_H
#define QTAWS_DELETEALTERNATECONTACTREQUEST_H

#include "accountrequest.h"

namespace QtAws {
namespace Account {

class DeleteAlternateContactRequestPrivate;

class QTAWSACCOUNT_EXPORT DeleteAlternateContactRequest : public AccountRequest {

public:
    DeleteAlternateContactRequest(const DeleteAlternateContactRequest &other);
    DeleteAlternateContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlternateContactRequest)

};

} // namespace Account
} // namespace QtAws

#endif
