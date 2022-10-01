// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRXNORMINFERENCEJOBREQUEST_H
#define QTAWS_STARTRXNORMINFERENCEJOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartRxNormInferenceJobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StartRxNormInferenceJobRequest : public ComprehendMedicalRequest {

public:
    StartRxNormInferenceJobRequest(const StartRxNormInferenceJobRequest &other);
    StartRxNormInferenceJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRxNormInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
