// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETALTERNATECONTACTRESPONSE_P_H
#define QTAWS_GETALTERNATECONTACTRESPONSE_P_H

#include "accountresponse_p.h"

namespace QtAws {
namespace Account {

class GetAlternateContactResponse;

class GetAlternateContactResponsePrivate : public AccountResponsePrivate {

public:

    explicit GetAlternateContactResponsePrivate(GetAlternateContactResponse * const q);

    void parseGetAlternateContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAlternateContactResponse)
    Q_DISABLE_COPY(GetAlternateContactResponsePrivate)

};

} // namespace Account
} // namespace QtAws

#endif
