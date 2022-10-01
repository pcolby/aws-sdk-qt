// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTICD10CMINFERENCEJOBSREQUEST_H
#define QTAWS_LISTICD10CMINFERENCEJOBSREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListICD10CMInferenceJobsRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT ListICD10CMInferenceJobsRequest : public ComprehendMedicalRequest {

public:
    ListICD10CMInferenceJobsRequest(const ListICD10CMInferenceJobsRequest &other);
    ListICD10CMInferenceJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListICD10CMInferenceJobsRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
