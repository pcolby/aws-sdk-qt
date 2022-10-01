// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTINFORMATIONRESPONSE_P_H
#define QTAWS_GETCONTACTINFORMATIONRESPONSE_P_H

#include "accountresponse_p.h"

namespace QtAws {
namespace Account {

class GetContactInformationResponse;

class GetContactInformationResponsePrivate : public AccountResponsePrivate {

public:

    explicit GetContactInformationResponsePrivate(GetContactInformationResponse * const q);

    void parseGetContactInformationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContactInformationResponse)
    Q_DISABLE_COPY(GetContactInformationResponsePrivate)

};

} // namespace Account
} // namespace QtAws

#endif
