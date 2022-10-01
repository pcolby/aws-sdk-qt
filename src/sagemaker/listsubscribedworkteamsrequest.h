// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIBEDWORKTEAMSREQUEST_H
#define QTAWS_LISTSUBSCRIBEDWORKTEAMSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListSubscribedWorkteamsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListSubscribedWorkteamsRequest : public SageMakerRequest {

public:
    ListSubscribedWorkteamsRequest(const ListSubscribedWorkteamsRequest &other);
    ListSubscribedWorkteamsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubscribedWorkteamsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
