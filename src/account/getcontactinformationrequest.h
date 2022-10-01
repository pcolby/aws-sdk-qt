// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTINFORMATIONREQUEST_H
#define QTAWS_GETCONTACTINFORMATIONREQUEST_H

#include "accountrequest.h"

namespace QtAws {
namespace Account {

class GetContactInformationRequestPrivate;

class QTAWSACCOUNT_EXPORT GetContactInformationRequest : public AccountRequest {

public:
    GetContactInformationRequest(const GetContactInformationRequest &other);
    GetContactInformationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactInformationRequest)

};

} // namespace Account
} // namespace QtAws

#endif
