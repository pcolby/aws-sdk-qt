// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSOPTEDOUTREQUEST_H
#define QTAWS_LISTPHONENUMBERSOPTEDOUTREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class ListPhoneNumbersOptedOutRequestPrivate;

class QTAWSSNS_EXPORT ListPhoneNumbersOptedOutRequest : public SnsRequest {

public:
    ListPhoneNumbersOptedOutRequest(const ListPhoneNumbersOptedOutRequest &other);
    ListPhoneNumbersOptedOutRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPhoneNumbersOptedOutRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
