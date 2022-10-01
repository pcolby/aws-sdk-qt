// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECORDRESPONSE_H
#define QTAWS_DELETERECORDRESPONSE_H

#include "sagemakerfeaturestoreruntimeresponse.h"
#include "deleterecordrequest.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class DeleteRecordResponsePrivate;

class QTAWSSAGEMAKERFEATURESTORERUNTIME_EXPORT DeleteRecordResponse : public SageMakerFeatureStoreRuntimeResponse {
    Q_OBJECT

public:
    DeleteRecordResponse(const DeleteRecordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRecordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecordResponse)
    Q_DISABLE_COPY(DeleteRecordResponse)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
