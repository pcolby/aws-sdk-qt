// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLONGTERMPRICINGREQUEST_H
#define QTAWS_LISTLONGTERMPRICINGREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class ListLongTermPricingRequestPrivate;

class QTAWSSNOWBALL_EXPORT ListLongTermPricingRequest : public SnowballRequest {

public:
    ListLongTermPricingRequest(const ListLongTermPricingRequest &other);
    ListLongTermPricingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLongTermPricingRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
