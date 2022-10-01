// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SMSRESPONSE_P_H
#define QTAWS_SMSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Sms {

class SmsResponse;

class SmsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SmsResponsePrivate(SmsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SmsResponse)
    Q_DISABLE_COPY(SmsResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
