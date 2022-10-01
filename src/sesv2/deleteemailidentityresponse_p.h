// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILIDENTITYRESPONSE_P_H
#define QTAWS_DELETEEMAILIDENTITYRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class DeleteEmailIdentityResponse;

class DeleteEmailIdentityResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit DeleteEmailIdentityResponsePrivate(DeleteEmailIdentityResponse * const q);

    void parseDeleteEmailIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEmailIdentityResponse)
    Q_DISABLE_COPY(DeleteEmailIdentityResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
