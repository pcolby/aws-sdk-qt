// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDANNOUNCEMENTREQUEST_P_H
#define QTAWS_SENDANNOUNCEMENTREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "sendannouncementrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SendAnnouncementRequest;

class SendAnnouncementRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    SendAnnouncementRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   SendAnnouncementRequest * const q);
    SendAnnouncementRequestPrivate(const SendAnnouncementRequestPrivate &other,
                                   SendAnnouncementRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendAnnouncementRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
