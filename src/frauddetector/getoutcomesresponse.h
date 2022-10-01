// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOUTCOMESRESPONSE_H
#define QTAWS_GETOUTCOMESRESPONSE_H

#include "frauddetectorresponse.h"
#include "getoutcomesrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetOutcomesResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetOutcomesResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetOutcomesResponse(const GetOutcomesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOutcomesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOutcomesResponse)
    Q_DISABLE_COPY(GetOutcomesResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
