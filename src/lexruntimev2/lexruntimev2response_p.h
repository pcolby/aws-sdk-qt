// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXRUNTIMEV2RESPONSE_P_H
#define QTAWS_LEXRUNTIMEV2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

class LexRuntimeV2Response;

class LexRuntimeV2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LexRuntimeV2ResponsePrivate(LexRuntimeV2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LexRuntimeV2Response)
    Q_DISABLE_COPY(LexRuntimeV2ResponsePrivate)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
