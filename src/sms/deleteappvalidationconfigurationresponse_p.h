// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPVALIDATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEAPPVALIDATIONCONFIGURATIONRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class DeleteAppValidationConfigurationResponse;

class DeleteAppValidationConfigurationResponsePrivate : public SmsResponsePrivate {

public:

    explicit DeleteAppValidationConfigurationResponsePrivate(DeleteAppValidationConfigurationResponse * const q);

    void parseDeleteAppValidationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppValidationConfigurationResponse)
    Q_DISABLE_COPY(DeleteAppValidationConfigurationResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
