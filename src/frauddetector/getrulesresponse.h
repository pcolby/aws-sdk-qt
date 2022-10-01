// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULESRESPONSE_H
#define QTAWS_GETRULESRESPONSE_H

#include "frauddetectorresponse.h"
#include "getrulesrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetRulesResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetRulesResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetRulesResponse(const GetRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRulesResponse)
    Q_DISABLE_COPY(GetRulesResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
