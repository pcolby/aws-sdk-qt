// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEADMINRESPONSE_P_H
#define QTAWS_DELETEAPPINSTANCEADMINRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteAppInstanceAdminResponse;

class DeleteAppInstanceAdminResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteAppInstanceAdminResponsePrivate(DeleteAppInstanceAdminResponse * const q);

    void parseDeleteAppInstanceAdminResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppInstanceAdminResponse)
    Q_DISABLE_COPY(DeleteAppInstanceAdminResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
