// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORSRESPONSE_H
#define QTAWS_GETDETECTORSRESPONSE_H

#include "frauddetectorresponse.h"
#include "getdetectorsrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetDetectorsResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetDetectorsResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetDetectorsResponse(const GetDetectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDetectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDetectorsResponse)
    Q_DISABLE_COPY(GetDetectorsResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
