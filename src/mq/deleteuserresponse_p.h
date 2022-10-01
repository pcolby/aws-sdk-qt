// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERRESPONSE_P_H
#define QTAWS_DELETEUSERRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class DeleteUserResponse;

class DeleteUserResponsePrivate : public MqResponsePrivate {

public:

    explicit DeleteUserResponsePrivate(DeleteUserResponse * const q);

    void parseDeleteUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserResponse)
    Q_DISABLE_COPY(DeleteUserResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
