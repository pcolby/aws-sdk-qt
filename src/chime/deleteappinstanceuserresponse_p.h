// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEUSERRESPONSE_P_H
#define QTAWS_DELETEAPPINSTANCEUSERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteAppInstanceUserResponse;

class DeleteAppInstanceUserResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteAppInstanceUserResponsePrivate(DeleteAppInstanceUserResponse * const q);

    void parseDeleteAppInstanceUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppInstanceUserResponse)
    Q_DISABLE_COPY(DeleteAppInstanceUserResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
