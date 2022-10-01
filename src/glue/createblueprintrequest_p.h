// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBLUEPRINTREQUEST_P_H
#define QTAWS_CREATEBLUEPRINTREQUEST_P_H

#include "gluerequest_p.h"
#include "createblueprintrequest.h"

namespace QtAws {
namespace Glue {

class CreateBlueprintRequest;

class CreateBlueprintRequestPrivate : public GlueRequestPrivate {

public:
    CreateBlueprintRequestPrivate(const GlueRequest::Action action,
                                   CreateBlueprintRequest * const q);
    CreateBlueprintRequestPrivate(const CreateBlueprintRequestPrivate &other,
                                   CreateBlueprintRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBlueprintRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
