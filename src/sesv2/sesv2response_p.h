// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SESV2RESPONSE_P_H
#define QTAWS_SESV2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SESv2 {

class SESv2Response;

class SESv2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SESv2ResponsePrivate(SESv2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SESv2Response)
    Q_DISABLE_COPY(SESv2ResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
