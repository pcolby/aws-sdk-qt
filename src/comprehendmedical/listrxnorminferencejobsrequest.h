// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRXNORMINFERENCEJOBSREQUEST_H
#define QTAWS_LISTRXNORMINFERENCEJOBSREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListRxNormInferenceJobsRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT ListRxNormInferenceJobsRequest : public ComprehendMedicalRequest {

public:
    ListRxNormInferenceJobsRequest(const ListRxNormInferenceJobsRequest &other);
    ListRxNormInferenceJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRxNormInferenceJobsRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
