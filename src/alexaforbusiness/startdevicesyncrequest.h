// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEVICESYNCREQUEST_H
#define QTAWS_STARTDEVICESYNCREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class StartDeviceSyncRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT StartDeviceSyncRequest : public AlexaForBusinessRequest {

public:
    StartDeviceSyncRequest(const StartDeviceSyncRequest &other);
    StartDeviceSyncRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDeviceSyncRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
