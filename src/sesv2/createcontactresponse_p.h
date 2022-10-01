// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTRESPONSE_P_H
#define QTAWS_CREATECONTACTRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class CreateContactResponse;

class CreateContactResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit CreateContactResponsePrivate(CreateContactResponse * const q);

    void parseCreateContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContactResponse)
    Q_DISABLE_COPY(CreateContactResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
