// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALTERNATECONTACTRESPONSE_P_H
#define QTAWS_DELETEALTERNATECONTACTRESPONSE_P_H

#include "accountresponse_p.h"

namespace QtAws {
namespace Account {

class DeleteAlternateContactResponse;

class DeleteAlternateContactResponsePrivate : public AccountResponsePrivate {

public:

    explicit DeleteAlternateContactResponsePrivate(DeleteAlternateContactResponse * const q);

    void parseDeleteAlternateContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAlternateContactResponse)
    Q_DISABLE_COPY(DeleteAlternateContactResponsePrivate)

};

} // namespace Account
} // namespace QtAws

#endif
