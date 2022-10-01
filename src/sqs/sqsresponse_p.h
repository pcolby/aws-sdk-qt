// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SQSRESPONSE_P_H
#define QTAWS_SQSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Sqs {

class SqsResponse;

class SqsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SqsResponsePrivate(SqsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsResponse)
    Q_DISABLE_COPY(SqsResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
