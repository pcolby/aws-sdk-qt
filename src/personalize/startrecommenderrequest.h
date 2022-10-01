// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRECOMMENDERREQUEST_H
#define QTAWS_STARTRECOMMENDERREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class StartRecommenderRequestPrivate;

class QTAWSPERSONALIZE_EXPORT StartRecommenderRequest : public PersonalizeRequest {

public:
    StartRecommenderRequest(const StartRecommenderRequest &other);
    StartRecommenderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRecommenderRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
