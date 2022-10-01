// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNOMEDCTINFERENCEJOBREQUEST_H
#define QTAWS_DESCRIBESNOMEDCTINFERENCEJOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeSNOMEDCTInferenceJobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DescribeSNOMEDCTInferenceJobRequest : public ComprehendMedicalRequest {

public:
    DescribeSNOMEDCTInferenceJobRequest(const DescribeSNOMEDCTInferenceJobRequest &other);
    DescribeSNOMEDCTInferenceJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSNOMEDCTInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
