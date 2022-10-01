// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTACTINFORMATIONREQUEST_H
#define QTAWS_PUTCONTACTINFORMATIONREQUEST_H

#include "accountrequest.h"

namespace QtAws {
namespace Account {

class PutContactInformationRequestPrivate;

class QTAWSACCOUNT_EXPORT PutContactInformationRequest : public AccountRequest {

public:
    PutContactInformationRequest(const PutContactInformationRequest &other);
    PutContactInformationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutContactInformationRequest)

};

} // namespace Account
} // namespace QtAws

#endif
