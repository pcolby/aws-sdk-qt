// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCOUNTRESPONSE_P_H
#define QTAWS_ACCOUNTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Account {

class AccountResponse;

class AccountResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AccountResponsePrivate(AccountResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AccountResponse)
    Q_DISABLE_COPY(AccountResponsePrivate)

};

} // namespace Account
} // namespace QtAws

#endif
