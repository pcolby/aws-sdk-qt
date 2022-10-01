// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNOMEDCTINFERENCEJOBSREQUEST_H
#define QTAWS_LISTSNOMEDCTINFERENCEJOBSREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListSNOMEDCTInferenceJobsRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT ListSNOMEDCTInferenceJobsRequest : public ComprehendMedicalRequest {

public:
    ListSNOMEDCTInferenceJobsRequest(const ListSNOMEDCTInferenceJobsRequest &other);
    ListSNOMEDCTInferenceJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSNOMEDCTInferenceJobsRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
