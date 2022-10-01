// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSNOMEDCTINFERENCEJOBREQUEST_H
#define QTAWS_STARTSNOMEDCTINFERENCEJOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartSNOMEDCTInferenceJobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StartSNOMEDCTInferenceJobRequest : public ComprehendMedicalRequest {

public:
    StartSNOMEDCTInferenceJobRequest(const StartSNOMEDCTInferenceJobRequest &other);
    StartSNOMEDCTInferenceJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSNOMEDCTInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
