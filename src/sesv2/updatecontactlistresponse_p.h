// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTLISTRESPONSE_P_H
#define QTAWS_UPDATECONTACTLISTRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class UpdateContactListResponse;

class UpdateContactListResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit UpdateContactListResponsePrivate(UpdateContactListResponse * const q);

    void parseUpdateContactListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContactListResponse)
    Q_DISABLE_COPY(UpdateContactListResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
