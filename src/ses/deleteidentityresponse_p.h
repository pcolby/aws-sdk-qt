// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYRESPONSE_P_H
#define QTAWS_DELETEIDENTITYRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DeleteIdentityResponse;

class DeleteIdentityResponsePrivate : public SesResponsePrivate {

public:

    explicit DeleteIdentityResponsePrivate(DeleteIdentityResponse * const q);

    void parseDeleteIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIdentityResponse)
    Q_DISABLE_COPY(DeleteIdentityResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
