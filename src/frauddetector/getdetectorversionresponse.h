// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORVERSIONRESPONSE_H
#define QTAWS_GETDETECTORVERSIONRESPONSE_H

#include "frauddetectorresponse.h"
#include "getdetectorversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetDetectorVersionResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetDetectorVersionResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetDetectorVersionResponse(const GetDetectorVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDetectorVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDetectorVersionResponse)
    Q_DISABLE_COPY(GetDetectorVersionResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
