// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPARTNERREQUEST_P_H
#define QTAWS_ADDPARTNERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "addpartnerrequest.h"

namespace QtAws {
namespace Redshift {

class AddPartnerRequest;

class AddPartnerRequestPrivate : public RedshiftRequestPrivate {

public:
    AddPartnerRequestPrivate(const RedshiftRequest::Action action,
                                   AddPartnerRequest * const q);
    AddPartnerRequestPrivate(const AddPartnerRequestPrivate &other,
                                   AddPartnerRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddPartnerRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
