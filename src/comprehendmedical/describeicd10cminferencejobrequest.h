// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEICD10CMINFERENCEJOBREQUEST_H
#define QTAWS_DESCRIBEICD10CMINFERENCEJOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeICD10CMInferenceJobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DescribeICD10CMInferenceJobRequest : public ComprehendMedicalRequest {

public:
    DescribeICD10CMInferenceJobRequest(const DescribeICD10CMInferenceJobRequest &other);
    DescribeICD10CMInferenceJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeICD10CMInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
