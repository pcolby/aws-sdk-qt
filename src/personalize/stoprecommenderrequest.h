// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRECOMMENDERREQUEST_H
#define QTAWS_STOPRECOMMENDERREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class StopRecommenderRequestPrivate;

class QTAWSPERSONALIZE_EXPORT StopRecommenderRequest : public PersonalizeRequest {

public:
    StopRecommenderRequest(const StopRecommenderRequest &other);
    StopRecommenderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopRecommenderRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
