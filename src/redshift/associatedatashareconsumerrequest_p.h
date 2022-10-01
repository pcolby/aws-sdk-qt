// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDATASHARECONSUMERREQUEST_P_H
#define QTAWS_ASSOCIATEDATASHARECONSUMERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "associatedatashareconsumerrequest.h"

namespace QtAws {
namespace Redshift {

class AssociateDataShareConsumerRequest;

class AssociateDataShareConsumerRequestPrivate : public RedshiftRequestPrivate {

public:
    AssociateDataShareConsumerRequestPrivate(const RedshiftRequest::Action action,
                                   AssociateDataShareConsumerRequest * const q);
    AssociateDataShareConsumerRequestPrivate(const AssociateDataShareConsumerRequestPrivate &other,
                                   AssociateDataShareConsumerRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateDataShareConsumerRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
