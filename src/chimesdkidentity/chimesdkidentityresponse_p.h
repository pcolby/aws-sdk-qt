// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKIDENTITYRESPONSE_P_H
#define QTAWS_CHIMESDKIDENTITYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ChimeSdkIdentityResponse;

class ChimeSdkIdentityResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ChimeSdkIdentityResponsePrivate(ChimeSdkIdentityResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChimeSdkIdentityResponse)
    Q_DISABLE_COPY(ChimeSdkIdentityResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
