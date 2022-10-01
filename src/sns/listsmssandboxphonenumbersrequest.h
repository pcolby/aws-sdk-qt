// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSMSSANDBOXPHONENUMBERSREQUEST_H
#define QTAWS_LISTSMSSANDBOXPHONENUMBERSREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class ListSMSSandboxPhoneNumbersRequestPrivate;

class QTAWSSNS_EXPORT ListSMSSandboxPhoneNumbersRequest : public SnsRequest {

public:
    ListSMSSandboxPhoneNumbersRequest(const ListSMSSandboxPhoneNumbersRequest &other);
    ListSMSSandboxPhoneNumbersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSMSSandboxPhoneNumbersRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
