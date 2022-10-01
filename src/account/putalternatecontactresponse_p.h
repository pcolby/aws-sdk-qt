// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTALTERNATECONTACTRESPONSE_P_H
#define QTAWS_PUTALTERNATECONTACTRESPONSE_P_H

#include "accountresponse_p.h"

namespace QtAws {
namespace Account {

class PutAlternateContactResponse;

class PutAlternateContactResponsePrivate : public AccountResponsePrivate {

public:

    explicit PutAlternateContactResponsePrivate(PutAlternateContactResponse * const q);

    void parsePutAlternateContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAlternateContactResponse)
    Q_DISABLE_COPY(PutAlternateContactResponsePrivate)

};

} // namespace Account
} // namespace QtAws

#endif
