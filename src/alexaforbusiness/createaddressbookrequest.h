// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDRESSBOOKREQUEST_H
#define QTAWS_CREATEADDRESSBOOKREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateAddressBookRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT CreateAddressBookRequest : public AlexaForBusinessRequest {

public:
    CreateAddressBookRequest(const CreateAddressBookRequest &other);
    CreateAddressBookRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAddressBookRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
