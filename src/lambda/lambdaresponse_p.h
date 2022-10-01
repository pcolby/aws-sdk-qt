// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAMBDARESPONSE_P_H
#define QTAWS_LAMBDARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Lambda {

class LambdaResponse;

class LambdaResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LambdaResponsePrivate(LambdaResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LambdaResponse)
    Q_DISABLE_COPY(LambdaResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
