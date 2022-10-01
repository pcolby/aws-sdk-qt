// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHAVAILABLEPHONENUMBERSREQUEST_H
#define QTAWS_SEARCHAVAILABLEPHONENUMBERSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class SearchAvailablePhoneNumbersRequestPrivate;

class QTAWSCONNECT_EXPORT SearchAvailablePhoneNumbersRequest : public ConnectRequest {

public:
    SearchAvailablePhoneNumbersRequest(const SearchAvailablePhoneNumbersRequest &other);
    SearchAvailablePhoneNumbersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchAvailablePhoneNumbersRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
