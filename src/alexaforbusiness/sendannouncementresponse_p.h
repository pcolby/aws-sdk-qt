// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDANNOUNCEMENTRESPONSE_P_H
#define QTAWS_SENDANNOUNCEMENTRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class SendAnnouncementResponse;

class SendAnnouncementResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit SendAnnouncementResponsePrivate(SendAnnouncementResponse * const q);

    void parseSendAnnouncementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendAnnouncementResponse)
    Q_DISABLE_COPY(SendAnnouncementResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
