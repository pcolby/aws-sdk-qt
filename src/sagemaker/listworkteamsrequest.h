// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKTEAMSREQUEST_H
#define QTAWS_LISTWORKTEAMSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListWorkteamsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListWorkteamsRequest : public SageMakerRequest {

public:
    ListWorkteamsRequest(const ListWorkteamsRequest &other);
    ListWorkteamsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkteamsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
