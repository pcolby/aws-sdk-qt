// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHATTOKENRESPONSE_P_H
#define QTAWS_CREATECHATTOKENRESPONSE_P_H

#include "ivschatresponse_p.h"

namespace QtAws {
namespace IvsChat {

class CreateChatTokenResponse;

class CreateChatTokenResponsePrivate : public IvsChatResponsePrivate {

public:

    explicit CreateChatTokenResponsePrivate(CreateChatTokenResponse * const q);

    void parseCreateChatTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateChatTokenResponse)
    Q_DISABLE_COPY(CreateChatTokenResponsePrivate)

};

} // namespace IvsChat
} // namespace QtAws

#endif
