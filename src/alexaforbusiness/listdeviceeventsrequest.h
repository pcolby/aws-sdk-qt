// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEEVENTSREQUEST_H
#define QTAWS_LISTDEVICEEVENTSREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListDeviceEventsRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListDeviceEventsRequest : public AlexaForBusinessRequest {

public:
    ListDeviceEventsRequest(const ListDeviceEventsRequest &other);
    ListDeviceEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeviceEventsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
