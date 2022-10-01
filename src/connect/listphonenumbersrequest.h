// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSREQUEST_H
#define QTAWS_LISTPHONENUMBERSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListPhoneNumbersRequestPrivate;

class QTAWSCONNECT_EXPORT ListPhoneNumbersRequest : public ConnectRequest {

public:
    ListPhoneNumbersRequest(const ListPhoneNumbersRequest &other);
    ListPhoneNumbersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPhoneNumbersRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
