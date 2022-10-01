// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROTECTIONRESPONSE_P_H
#define QTAWS_DELETEPROTECTIONRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DeleteProtectionResponse;

class DeleteProtectionResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DeleteProtectionResponsePrivate(DeleteProtectionResponse * const q);

    void parseDeleteProtectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProtectionResponse)
    Q_DISABLE_COPY(DeleteProtectionResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
