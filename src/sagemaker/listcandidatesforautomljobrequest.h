// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCANDIDATESFORAUTOMLJOBREQUEST_H
#define QTAWS_LISTCANDIDATESFORAUTOMLJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListCandidatesForAutoMLJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListCandidatesForAutoMLJobRequest : public SageMakerRequest {

public:
    ListCandidatesForAutoMLJobRequest(const ListCandidatesForAutoMLJobRequest &other);
    ListCandidatesForAutoMLJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCandidatesForAutoMLJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
