// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEICD10CMINFERENCEJOBRESPONSE_H
#define QTAWS_DESCRIBEICD10CMINFERENCEJOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "describeicd10cminferencejobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeICD10CMInferenceJobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DescribeICD10CMInferenceJobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    DescribeICD10CMInferenceJobResponse(const DescribeICD10CMInferenceJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeICD10CMInferenceJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeICD10CMInferenceJobResponse)
    Q_DISABLE_COPY(DescribeICD10CMInferenceJobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
