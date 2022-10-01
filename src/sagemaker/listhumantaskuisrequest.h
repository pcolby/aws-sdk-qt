// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHUMANTASKUISREQUEST_H
#define QTAWS_LISTHUMANTASKUISREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListHumanTaskUisRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListHumanTaskUisRequest : public SageMakerRequest {

public:
    ListHumanTaskUisRequest(const ListHumanTaskUisRequest &other);
    ListHumanTaskUisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHumanTaskUisRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
