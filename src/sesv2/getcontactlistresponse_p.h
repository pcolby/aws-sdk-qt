// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTLISTRESPONSE_P_H
#define QTAWS_GETCONTACTLISTRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetContactListResponse;

class GetContactListResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetContactListResponsePrivate(GetContactListResponse * const q);

    void parseGetContactListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContactListResponse)
    Q_DISABLE_COPY(GetContactListResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
