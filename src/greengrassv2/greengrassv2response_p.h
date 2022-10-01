// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GREENGRASSV2RESPONSE_P_H
#define QTAWS_GREENGRASSV2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace GreengrassV2 {

class GreengrassV2Response;

class GreengrassV2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit GreengrassV2ResponsePrivate(GreengrassV2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GreengrassV2Response)
    Q_DISABLE_COPY(GreengrassV2ResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
