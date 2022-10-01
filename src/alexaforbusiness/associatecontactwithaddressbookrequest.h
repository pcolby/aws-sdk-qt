// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONTACTWITHADDRESSBOOKREQUEST_H
#define QTAWS_ASSOCIATECONTACTWITHADDRESSBOOKREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateContactWithAddressBookRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AssociateContactWithAddressBookRequest : public AlexaForBusinessRequest {

public:
    AssociateContactWithAddressBookRequest(const AssociateContactWithAddressBookRequest &other);
    AssociateContactWithAddressBookRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateContactWithAddressBookRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
