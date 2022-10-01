// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEADMINRESPONSE_P_H
#define QTAWS_CREATEAPPINSTANCEADMINRESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class CreateAppInstanceAdminResponse;

class CreateAppInstanceAdminResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit CreateAppInstanceAdminResponsePrivate(CreateAppInstanceAdminResponse * const q);

    void parseCreateAppInstanceAdminResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAppInstanceAdminResponse)
    Q_DISABLE_COPY(CreateAppInstanceAdminResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
