// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDATASHARECONSUMERREQUEST_P_H
#define QTAWS_DISASSOCIATEDATASHARECONSUMERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "disassociatedatashareconsumerrequest.h"

namespace QtAws {
namespace Redshift {

class DisassociateDataShareConsumerRequest;

class DisassociateDataShareConsumerRequestPrivate : public RedshiftRequestPrivate {

public:
    DisassociateDataShareConsumerRequestPrivate(const RedshiftRequest::Action action,
                                   DisassociateDataShareConsumerRequest * const q);
    DisassociateDataShareConsumerRequestPrivate(const DisassociateDataShareConsumerRequestPrivate &other,
                                   DisassociateDataShareConsumerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateDataShareConsumerRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
