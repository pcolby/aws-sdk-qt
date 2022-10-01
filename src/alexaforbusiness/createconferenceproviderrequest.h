// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFERENCEPROVIDERREQUEST_H
#define QTAWS_CREATECONFERENCEPROVIDERREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateConferenceProviderRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT CreateConferenceProviderRequest : public AlexaForBusinessRequest {

public:
    CreateConferenceProviderRequest(const CreateConferenceProviderRequest &other);
    CreateConferenceProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConferenceProviderRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
