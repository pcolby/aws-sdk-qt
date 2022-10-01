// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEVICEWITHNETWORKPROFILEREQUEST_H
#define QTAWS_ASSOCIATEDEVICEWITHNETWORKPROFILEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateDeviceWithNetworkProfileRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AssociateDeviceWithNetworkProfileRequest : public AlexaForBusinessRequest {

public:
    AssociateDeviceWithNetworkProfileRequest(const AssociateDeviceWithNetworkProfileRequest &other);
    AssociateDeviceWithNetworkProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDeviceWithNetworkProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
