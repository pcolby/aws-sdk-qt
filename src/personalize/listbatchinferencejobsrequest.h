// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHINFERENCEJOBSREQUEST_H
#define QTAWS_LISTBATCHINFERENCEJOBSREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class ListBatchInferenceJobsRequestPrivate;

class QTAWSPERSONALIZE_EXPORT ListBatchInferenceJobsRequest : public PersonalizeRequest {

public:
    ListBatchInferenceJobsRequest(const ListBatchInferenceJobsRequest &other);
    ListBatchInferenceJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBatchInferenceJobsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
