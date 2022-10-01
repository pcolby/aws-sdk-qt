// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMENTITYTYPEREQUEST_P_H
#define QTAWS_CREATECUSTOMENTITYTYPEREQUEST_P_H

#include "gluerequest_p.h"
#include "createcustomentitytyperequest.h"

namespace QtAws {
namespace Glue {

class CreateCustomEntityTypeRequest;

class CreateCustomEntityTypeRequestPrivate : public GlueRequestPrivate {

public:
    CreateCustomEntityTypeRequestPrivate(const GlueRequest::Action action,
                                   CreateCustomEntityTypeRequest * const q);
    CreateCustomEntityTypeRequestPrivate(const CreateCustomEntityTypeRequestPrivate &other,
                                   CreateCustomEntityTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomEntityTypeRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
