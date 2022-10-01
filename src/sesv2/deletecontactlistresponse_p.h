// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTLISTRESPONSE_P_H
#define QTAWS_DELETECONTACTLISTRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class DeleteContactListResponse;

class DeleteContactListResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit DeleteContactListResponsePrivate(DeleteContactListResponse * const q);

    void parseDeleteContactListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteContactListResponse)
    Q_DISABLE_COPY(DeleteContactListResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
