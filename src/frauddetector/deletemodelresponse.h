// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELRESPONSE_H
#define QTAWS_DELETEMODELRESPONSE_H

#include "frauddetectorresponse.h"
#include "deletemodelrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteModelResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteModelResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteModelResponse(const DeleteModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelResponse)
    Q_DISABLE_COPY(DeleteModelResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
