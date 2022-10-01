// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDHSMV2RESPONSE_P_H
#define QTAWS_CLOUDHSMV2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CloudHsmV2 {

class CloudHsmV2Response;

class CloudHsmV2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CloudHsmV2ResponsePrivate(CloudHsmV2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudHsmV2Response)
    Q_DISABLE_COPY(CloudHsmV2ResponsePrivate)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
