// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECORDRESPONSE_P_H
#define QTAWS_GETRECORDRESPONSE_P_H

#include "sagemakerfeaturestoreruntimeresponse_p.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class GetRecordResponse;

class GetRecordResponsePrivate : public SageMakerFeatureStoreRuntimeResponsePrivate {

public:

    explicit GetRecordResponsePrivate(GetRecordResponse * const q);

    void parseGetRecordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRecordResponse)
    Q_DISABLE_COPY(GetRecordResponsePrivate)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
