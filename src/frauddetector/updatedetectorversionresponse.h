// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORVERSIONRESPONSE_H
#define QTAWS_UPDATEDETECTORVERSIONRESPONSE_H

#include "frauddetectorresponse.h"
#include "updatedetectorversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateDetectorVersionResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    UpdateDetectorVersionResponse(const UpdateDetectorVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDetectorVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDetectorVersionResponse)
    Q_DISABLE_COPY(UpdateDetectorVersionResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
