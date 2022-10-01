// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESSAGERESPONSE_P_H
#define QTAWS_DELETEMESSAGERESPONSE_P_H

#include "ivschatresponse_p.h"

namespace QtAws {
namespace IvsChat {

class DeleteMessageResponse;

class DeleteMessageResponsePrivate : public IvsChatResponsePrivate {

public:

    explicit DeleteMessageResponsePrivate(DeleteMessageResponse * const q);

    void parseDeleteMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMessageResponse)
    Q_DISABLE_COPY(DeleteMessageResponsePrivate)

};

} // namespace IvsChat
} // namespace QtAws

#endif
