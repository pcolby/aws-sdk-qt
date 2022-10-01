// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTLISTRESPONSE_P_H
#define QTAWS_CREATECONTACTLISTRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class CreateContactListResponse;

class CreateContactListResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit CreateContactListResponsePrivate(CreateContactListResponse * const q);

    void parseCreateContactListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContactListResponse)
    Q_DISABLE_COPY(CreateContactListResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
