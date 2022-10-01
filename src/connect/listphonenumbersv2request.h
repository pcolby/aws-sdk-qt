// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSV2REQUEST_H
#define QTAWS_LISTPHONENUMBERSV2REQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListPhoneNumbersV2RequestPrivate;

class QTAWSCONNECT_EXPORT ListPhoneNumbersV2Request : public ConnectRequest {

public:
    ListPhoneNumbersV2Request(const ListPhoneNumbersV2Request &other);
    ListPhoneNumbersV2Request();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPhoneNumbersV2Request)

};

} // namespace Connect
} // namespace QtAws

#endif
