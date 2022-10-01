// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFERENCEPROVIDERREQUEST_H
#define QTAWS_GETCONFERENCEPROVIDERREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetConferenceProviderRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetConferenceProviderRequest : public AlexaForBusinessRequest {

public:
    GetConferenceProviderRequest(const GetConferenceProviderRequest &other);
    GetConferenceProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConferenceProviderRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
