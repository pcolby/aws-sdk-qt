// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXTERNALMODELRESPONSE_H
#define QTAWS_DELETEEXTERNALMODELRESPONSE_H

#include "frauddetectorresponse.h"
#include "deleteexternalmodelrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteExternalModelResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteExternalModelResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteExternalModelResponse(const DeleteExternalModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteExternalModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExternalModelResponse)
    Q_DISABLE_COPY(DeleteExternalModelResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
