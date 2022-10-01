// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHATCONTACTRESPONSE_H
#define QTAWS_STARTCHATCONTACTRESPONSE_H

#include "connectresponse.h"
#include "startchatcontactrequest.h"

namespace QtAws {
namespace Connect {

class StartChatContactResponsePrivate;

class QTAWSCONNECT_EXPORT StartChatContactResponse : public ConnectResponse {
    Q_OBJECT

public:
    StartChatContactResponse(const StartChatContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartChatContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartChatContactResponse)
    Q_DISABLE_COPY(StartChatContactResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
