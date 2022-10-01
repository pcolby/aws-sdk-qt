// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPRESPONSE_P_H
#define QTAWS_DELETEAPPRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class DeleteAppResponse;

class DeleteAppResponsePrivate : public SmsResponsePrivate {

public:

    explicit DeleteAppResponsePrivate(DeleteAppResponse * const q);

    void parseDeleteAppResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppResponse)
    Q_DISABLE_COPY(DeleteAppResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
