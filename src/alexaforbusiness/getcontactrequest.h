// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTREQUEST_H
#define QTAWS_GETCONTACTREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetContactRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetContactRequest : public AlexaForBusinessRequest {

public:
    GetContactRequest(const GetContactRequest &other);
    GetContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
