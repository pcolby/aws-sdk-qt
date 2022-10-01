// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECORDRESPONSE_H
#define QTAWS_GETRECORDRESPONSE_H

#include "sagemakerfeaturestoreruntimeresponse.h"
#include "getrecordrequest.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class GetRecordResponsePrivate;

class QTAWSSAGEMAKERFEATURESTORERUNTIME_EXPORT GetRecordResponse : public SageMakerFeatureStoreRuntimeResponse {
    Q_OBJECT

public:
    GetRecordResponse(const GetRecordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecordResponse)
    Q_DISABLE_COPY(GetRecordResponse)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
