// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHRESPONSE_P_H
#define QTAWS_BATCHRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Batch {

class BatchResponse;

class BatchResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit BatchResponsePrivate(BatchResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchResponse)
    Q_DISABLE_COPY(BatchResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
