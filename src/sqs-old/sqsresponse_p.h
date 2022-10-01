// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSRESPONSE_P_H
#define SQSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"
#include "sqserror.h"

#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

class SqsResponse;

class SqsResponsePrivate : public AwsAbstractResponsePrivate {

public:
    SqsErrorList errors; ///< SQS errors.
    QString requestId;   ///< SQS request ID.

    SqsResponsePrivate(SqsResponse * const q);

    void parseErrorResponse(QXmlStreamReader &xml);
    void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsResponse)
    Q_DISABLE_COPY(SqsResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
