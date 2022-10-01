// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCERESPONSE_P_H
#define QTAWS_CREATEAPPINSTANCERESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class CreateAppInstanceResponse;

class CreateAppInstanceResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit CreateAppInstanceResponsePrivate(CreateAppInstanceResponse * const q);

    void parseCreateAppInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAppInstanceResponse)
    Q_DISABLE_COPY(CreateAppInstanceResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
