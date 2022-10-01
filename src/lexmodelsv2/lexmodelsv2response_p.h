// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXMODELSV2RESPONSE_P_H
#define QTAWS_LEXMODELSV2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace LexModelsV2 {

class LexModelsV2Response;

class LexModelsV2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LexModelsV2ResponsePrivate(LexModelsV2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LexModelsV2Response)
    Q_DISABLE_COPY(LexModelsV2ResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
