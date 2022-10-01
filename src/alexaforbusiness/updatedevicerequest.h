// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEREQUEST_H
#define QTAWS_UPDATEDEVICEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateDeviceRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateDeviceRequest : public AlexaForBusinessRequest {

public:
    UpdateDeviceRequest(const UpdateDeviceRequest &other);
    UpdateDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
