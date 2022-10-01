// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDRESPONSE_H
#define QTAWS_PUTRECORDRESPONSE_H

#include "sagemakerfeaturestoreruntimeresponse.h"
#include "putrecordrequest.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class PutRecordResponsePrivate;

class QTAWSSAGEMAKERFEATURESTORERUNTIME_EXPORT PutRecordResponse : public SageMakerFeatureStoreRuntimeResponse {
    Q_OBJECT

public:
    PutRecordResponse(const PutRecordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRecordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRecordResponse)
    Q_DISABLE_COPY(PutRecordResponse)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
