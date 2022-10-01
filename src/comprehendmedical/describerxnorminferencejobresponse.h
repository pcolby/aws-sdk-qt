// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERXNORMINFERENCEJOBRESPONSE_H
#define QTAWS_DESCRIBERXNORMINFERENCEJOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "describerxnorminferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeRxNormInferenceJobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DescribeRxNormInferenceJobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    DescribeRxNormInferenceJobResponse(const DescribeRxNormInferenceJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRxNormInferenceJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRxNormInferenceJobResponse)
    Q_DISABLE_COPY(DescribeRxNormInferenceJobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
