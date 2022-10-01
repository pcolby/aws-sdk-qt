// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMASTERACCOUNTRESPONSE_P_H
#define QTAWS_GETMASTERACCOUNTRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetMasterAccountResponse;

class GetMasterAccountResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetMasterAccountResponsePrivate(GetMasterAccountResponse * const q);

    void parseGetMasterAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMasterAccountResponse)
    Q_DISABLE_COPY(GetMasterAccountResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
