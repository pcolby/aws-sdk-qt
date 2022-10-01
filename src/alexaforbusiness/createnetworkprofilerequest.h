// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKPROFILEREQUEST_H
#define QTAWS_CREATENETWORKPROFILEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateNetworkProfileRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT CreateNetworkProfileRequest : public AlexaForBusinessRequest {

public:
    CreateNetworkProfileRequest(const CreateNetworkProfileRequest &other);
    CreateNetworkProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
