// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERXNORMINFERENCEJOBREQUEST_H
#define QTAWS_DESCRIBERXNORMINFERENCEJOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeRxNormInferenceJobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DescribeRxNormInferenceJobRequest : public ComprehendMedicalRequest {

public:
    DescribeRxNormInferenceJobRequest(const DescribeRxNormInferenceJobRequest &other);
    DescribeRxNormInferenceJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRxNormInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
