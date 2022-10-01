// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEUSAGEDATAREQUEST_H
#define QTAWS_DELETEDEVICEUSAGEDATAREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteDeviceUsageDataRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteDeviceUsageDataRequest : public AlexaForBusinessRequest {

public:
    DeleteDeviceUsageDataRequest(const DeleteDeviceUsageDataRequest &other);
    DeleteDeviceUsageDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeviceUsageDataRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
