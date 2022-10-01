// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRXNORMINFERENCEJOBREQUEST_H
#define QTAWS_STOPRXNORMINFERENCEJOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopRxNormInferenceJobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StopRxNormInferenceJobRequest : public ComprehendMedicalRequest {

public:
    StopRxNormInferenceJobRequest(const StopRxNormInferenceJobRequest &other);
    StopRxNormInferenceJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopRxNormInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
