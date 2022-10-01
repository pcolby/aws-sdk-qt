// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNOMEDCTINFERENCEJOBRESPONSE_H
#define QTAWS_DESCRIBESNOMEDCTINFERENCEJOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "describesnomedctinferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeSNOMEDCTInferenceJobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DescribeSNOMEDCTInferenceJobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    DescribeSNOMEDCTInferenceJobResponse(const DescribeSNOMEDCTInferenceJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSNOMEDCTInferenceJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSNOMEDCTInferenceJobResponse)
    Q_DISABLE_COPY(DescribeSNOMEDCTInferenceJobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
