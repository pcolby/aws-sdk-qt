// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAUTOMLJOBREQUEST_H
#define QTAWS_STOPAUTOMLJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StopAutoMLJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StopAutoMLJobRequest : public SageMakerRequest {

public:
    StopAutoMLJobRequest(const StopAutoMLJobRequest &other);
    StopAutoMLJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopAutoMLJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
