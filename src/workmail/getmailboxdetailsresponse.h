// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAILBOXDETAILSRESPONSE_H
#define QTAWS_GETMAILBOXDETAILSRESPONSE_H

#include "workmailresponse.h"
#include "getmailboxdetailsrequest.h"

namespace QtAws {
namespace WorkMail {

class GetMailboxDetailsResponsePrivate;

class QTAWSWORKMAIL_EXPORT GetMailboxDetailsResponse : public WorkMailResponse {
    Q_OBJECT

public:
    GetMailboxDetailsResponse(const GetMailboxDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMailboxDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMailboxDetailsResponse)
    Q_DISABLE_COPY(GetMailboxDetailsResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
