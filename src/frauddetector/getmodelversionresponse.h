// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELVERSIONRESPONSE_H
#define QTAWS_GETMODELVERSIONRESPONSE_H

#include "frauddetectorresponse.h"
#include "getmodelversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetModelVersionResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetModelVersionResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetModelVersionResponse(const GetModelVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetModelVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetModelVersionResponse)
    Q_DISABLE_COPY(GetModelVersionResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
