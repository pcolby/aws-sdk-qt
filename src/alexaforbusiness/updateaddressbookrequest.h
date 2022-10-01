// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEADDRESSBOOKREQUEST_H
#define QTAWS_UPDATEADDRESSBOOKREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateAddressBookRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateAddressBookRequest : public AlexaForBusinessRequest {

public:
    UpdateAddressBookRequest(const UpdateAddressBookRequest &other);
    UpdateAddressBookRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAddressBookRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
