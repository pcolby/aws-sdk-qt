// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORVERSIONSTATUSRESPONSE_H
#define QTAWS_UPDATEDETECTORVERSIONSTATUSRESPONSE_H

#include "frauddetectorresponse.h"
#include "updatedetectorversionstatusrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionStatusResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateDetectorVersionStatusResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    UpdateDetectorVersionStatusResponse(const UpdateDetectorVersionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDetectorVersionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDetectorVersionStatusResponse)
    Q_DISABLE_COPY(UpdateDetectorVersionStatusResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
