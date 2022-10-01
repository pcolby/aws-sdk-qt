// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELVERSIONSTATUSRESPONSE_H
#define QTAWS_UPDATEMODELVERSIONSTATUSRESPONSE_H

#include "frauddetectorresponse.h"
#include "updatemodelversionstatusrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateModelVersionStatusResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateModelVersionStatusResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    UpdateModelVersionStatusResponse(const UpdateModelVersionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateModelVersionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateModelVersionStatusResponse)
    Q_DISABLE_COPY(UpdateModelVersionStatusResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
