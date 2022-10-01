// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INFERRXNORMRESPONSE_H
#define QTAWS_INFERRXNORMRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "inferrxnormrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class InferRxNormResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT InferRxNormResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    InferRxNormResponse(const InferRxNormRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InferRxNormRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InferRxNormResponse)
    Q_DISABLE_COPY(InferRxNormResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
