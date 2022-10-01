// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECORDRESPONSE_P_H
#define QTAWS_DELETERECORDRESPONSE_P_H

#include "sagemakerfeaturestoreruntimeresponse_p.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class DeleteRecordResponse;

class DeleteRecordResponsePrivate : public SageMakerFeatureStoreRuntimeResponsePrivate {

public:

    explicit DeleteRecordResponsePrivate(DeleteRecordResponse * const q);

    void parseDeleteRecordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRecordResponse)
    Q_DISABLE_COPY(DeleteRecordResponsePrivate)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
