// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVARIABLESRESPONSE_H
#define QTAWS_GETVARIABLESRESPONSE_H

#include "frauddetectorresponse.h"
#include "getvariablesrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetVariablesResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetVariablesResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetVariablesResponse(const GetVariablesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVariablesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVariablesResponse)
    Q_DISABLE_COPY(GetVariablesResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
