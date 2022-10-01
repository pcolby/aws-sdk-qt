// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTNERREQUEST_P_H
#define QTAWS_DELETEPARTNERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "deletepartnerrequest.h"

namespace QtAws {
namespace Redshift {

class DeletePartnerRequest;

class DeletePartnerRequestPrivate : public RedshiftRequestPrivate {

public:
    DeletePartnerRequestPrivate(const RedshiftRequest::Action action,
                                   DeletePartnerRequest * const q);
    DeletePartnerRequestPrivate(const DeletePartnerRequestPrivate &other,
                                   DeletePartnerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePartnerRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
