// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDERREQUEST_H
#define QTAWS_DELETERECOMMENDERREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DeleteRecommenderRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DeleteRecommenderRequest : public PersonalizeRequest {

public:
    DeleteRecommenderRequest(const DeleteRecommenderRequest &other);
    DeleteRecommenderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecommenderRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
