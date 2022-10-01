// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCERESPONSE_P_H
#define QTAWS_DELETEAPPINSTANCERESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeleteAppInstanceResponse;

class DeleteAppInstanceResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit DeleteAppInstanceResponsePrivate(DeleteAppInstanceResponse * const q);

    void parseDeleteAppInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppInstanceResponse)
    Q_DISABLE_COPY(DeleteAppInstanceResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
