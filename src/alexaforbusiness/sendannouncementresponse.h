// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDANNOUNCEMENTRESPONSE_H
#define QTAWS_SENDANNOUNCEMENTRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "sendannouncementrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SendAnnouncementResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SendAnnouncementResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    SendAnnouncementResponse(const SendAnnouncementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendAnnouncementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendAnnouncementResponse)
    Q_DISABLE_COPY(SendAnnouncementResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
