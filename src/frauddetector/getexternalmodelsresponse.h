// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTERNALMODELSRESPONSE_H
#define QTAWS_GETEXTERNALMODELSRESPONSE_H

#include "frauddetectorresponse.h"
#include "getexternalmodelsrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetExternalModelsResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetExternalModelsResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetExternalModelsResponse(const GetExternalModelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExternalModelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExternalModelsResponse)
    Q_DISABLE_COPY(GetExternalModelsResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
