// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITYTYPESRESPONSE_H
#define QTAWS_GETENTITYTYPESRESPONSE_H

#include "frauddetectorresponse.h"
#include "getentitytypesrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEntityTypesResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetEntityTypesResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetEntityTypesResponse(const GetEntityTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEntityTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEntityTypesResponse)
    Q_DISABLE_COPY(GetEntityTypesResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
