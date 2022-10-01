// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEADMINSRESPONSE_P_H
#define QTAWS_LISTAPPINSTANCEADMINSRESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstanceAdminsResponse;

class ListAppInstanceAdminsResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit ListAppInstanceAdminsResponsePrivate(ListAppInstanceAdminsResponse * const q);

    void parseListAppInstanceAdminsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppInstanceAdminsResponse)
    Q_DISABLE_COPY(ListAppInstanceAdminsResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
