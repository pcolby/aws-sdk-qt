// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKPROFILEREQUEST_H
#define QTAWS_UPDATENETWORKPROFILEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateNetworkProfileRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateNetworkProfileRequest : public AlexaForBusinessRequest {

public:
    UpdateNetworkProfileRequest(const UpdateNetworkProfileRequest &other);
    UpdateNetworkProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNetworkProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
