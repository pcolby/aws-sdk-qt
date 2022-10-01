// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXRUNTIMERESPONSE_P_H
#define QTAWS_LEXRUNTIMERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace LexRuntime {

class LexRuntimeResponse;

class LexRuntimeResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LexRuntimeResponsePrivate(LexRuntimeResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LexRuntimeResponse)
    Q_DISABLE_COPY(LexRuntimeResponsePrivate)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
