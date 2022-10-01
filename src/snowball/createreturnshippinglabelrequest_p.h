// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERETURNSHIPPINGLABELREQUEST_P_H
#define QTAWS_CREATERETURNSHIPPINGLABELREQUEST_P_H

#include "snowballrequest_p.h"
#include "createreturnshippinglabelrequest.h"

namespace QtAws {
namespace Snowball {

class CreateReturnShippingLabelRequest;

class CreateReturnShippingLabelRequestPrivate : public SnowballRequestPrivate {

public:
    CreateReturnShippingLabelRequestPrivate(const SnowballRequest::Action action,
                                   CreateReturnShippingLabelRequest * const q);
    CreateReturnShippingLabelRequestPrivate(const CreateReturnShippingLabelRequestPrivate &other,
                                   CreateReturnShippingLabelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReturnShippingLabelRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
