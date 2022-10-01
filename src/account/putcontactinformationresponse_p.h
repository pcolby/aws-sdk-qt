// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTACTINFORMATIONRESPONSE_P_H
#define QTAWS_PUTCONTACTINFORMATIONRESPONSE_P_H

#include "accountresponse_p.h"

namespace QtAws {
namespace Account {

class PutContactInformationResponse;

class PutContactInformationResponsePrivate : public AccountResponsePrivate {

public:

    explicit PutContactInformationResponsePrivate(PutContactInformationResponse * const q);

    void parsePutContactInformationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutContactInformationResponse)
    Q_DISABLE_COPY(PutContactInformationResponsePrivate)

};

} // namespace Account
} // namespace QtAws

#endif
