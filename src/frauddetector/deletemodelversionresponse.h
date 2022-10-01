// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELVERSIONRESPONSE_H
#define QTAWS_DELETEMODELVERSIONRESPONSE_H

#include "frauddetectorresponse.h"
#include "deletemodelversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteModelVersionResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteModelVersionResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteModelVersionResponse(const DeleteModelVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteModelVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelVersionResponse)
    Q_DISABLE_COPY(DeleteModelVersionResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
