// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSNOMEDCTINFERENCEJOBREQUEST_H
#define QTAWS_STOPSNOMEDCTINFERENCEJOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopSNOMEDCTInferenceJobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StopSNOMEDCTInferenceJobRequest : public ComprehendMedicalRequest {

public:
    StopSNOMEDCTInferenceJobRequest(const StopSNOMEDCTInferenceJobRequest &other);
    StopSNOMEDCTInferenceJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopSNOMEDCTInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
