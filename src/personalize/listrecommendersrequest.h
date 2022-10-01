// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDERSREQUEST_H
#define QTAWS_LISTRECOMMENDERSREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class ListRecommendersRequestPrivate;

class QTAWSPERSONALIZE_EXPORT ListRecommendersRequest : public PersonalizeRequest {

public:
    ListRecommendersRequest(const ListRecommendersRequest &other);
    ListRecommendersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecommendersRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
