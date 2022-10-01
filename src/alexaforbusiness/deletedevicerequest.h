// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEREQUEST_H
#define QTAWS_DELETEDEVICEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteDeviceRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteDeviceRequest : public AlexaForBusinessRequest {

public:
    DeleteDeviceRequest(const DeleteDeviceRequest &other);
    DeleteDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeviceRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
