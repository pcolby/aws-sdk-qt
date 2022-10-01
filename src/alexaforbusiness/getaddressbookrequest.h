// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADDRESSBOOKREQUEST_H
#define QTAWS_GETADDRESSBOOKREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetAddressBookRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetAddressBookRequest : public AlexaForBusinessRequest {

public:
    GetAddressBookRequest(const GetAddressBookRequest &other);
    GetAddressBookRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAddressBookRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
