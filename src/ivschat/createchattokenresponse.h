// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHATTOKENRESPONSE_H
#define QTAWS_CREATECHATTOKENRESPONSE_H

#include "ivschatresponse.h"
#include "createchattokenrequest.h"

namespace QtAws {
namespace IvsChat {

class CreateChatTokenResponsePrivate;

class QTAWSIVSCHAT_EXPORT CreateChatTokenResponse : public IvsChatResponse {
    Q_OBJECT

public:
    CreateChatTokenResponse(const CreateChatTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateChatTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChatTokenResponse)
    Q_DISABLE_COPY(CreateChatTokenResponse)

};

} // namespace IvsChat
} // namespace QtAws

#endif
