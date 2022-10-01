// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTICD10CMINFERENCEJOBREQUEST_H
#define QTAWS_STARTICD10CMINFERENCEJOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartICD10CMInferenceJobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT StartICD10CMInferenceJobRequest : public ComprehendMedicalRequest {

public:
    StartICD10CMInferenceJobRequest(const StartICD10CMInferenceJobRequest &other);
    StartICD10CMInferenceJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartICD10CMInferenceJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
