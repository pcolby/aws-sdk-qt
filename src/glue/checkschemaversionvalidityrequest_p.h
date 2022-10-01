// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKSCHEMAVERSIONVALIDITYREQUEST_P_H
#define QTAWS_CHECKSCHEMAVERSIONVALIDITYREQUEST_P_H

#include "gluerequest_p.h"
#include "checkschemaversionvalidityrequest.h"

namespace QtAws {
namespace Glue {

class CheckSchemaVersionValidityRequest;

class CheckSchemaVersionValidityRequestPrivate : public GlueRequestPrivate {

public:
    CheckSchemaVersionValidityRequestPrivate(const GlueRequest::Action action,
                                   CheckSchemaVersionValidityRequest * const q);
    CheckSchemaVersionValidityRequestPrivate(const CheckSchemaVersionValidityRequestPrivate &other,
                                   CheckSchemaVersionValidityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CheckSchemaVersionValidityRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
