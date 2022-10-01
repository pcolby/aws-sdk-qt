// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOMMENDERREQUEST_H
#define QTAWS_CREATERECOMMENDERREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class CreateRecommenderRequestPrivate;

class QTAWSPERSONALIZE_EXPORT CreateRecommenderRequest : public PersonalizeRequest {

public:
    CreateRecommenderRequest(const CreateRecommenderRequest &other);
    CreateRecommenderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecommenderRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
