// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDRESPONSE_P_H
#define QTAWS_PUTRECORDRESPONSE_P_H

#include "sagemakerfeaturestoreruntimeresponse_p.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class PutRecordResponse;

class PutRecordResponsePrivate : public SageMakerFeatureStoreRuntimeResponsePrivate {

public:

    explicit PutRecordResponsePrivate(PutRecordResponse * const q);

    void parsePutRecordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRecordResponse)
    Q_DISABLE_COPY(PutRecordResponsePrivate)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
