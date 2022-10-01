// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPICD10CMINFERENCEJOBREQUEST_H
#define QTAWS_STOPICD10CMINFERENCEJOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopICD10CMInferenceJobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StopICD10CMInferenceJobRequest : public ComprehendMedicalRequest {

public:
    StopICD10CMInferenceJobRequest(const StopICD10CMInferenceJobRequest &other);
    StopICD10CMInferenceJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopICD10CMInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
