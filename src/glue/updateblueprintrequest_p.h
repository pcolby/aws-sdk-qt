// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBLUEPRINTREQUEST_P_H
#define QTAWS_UPDATEBLUEPRINTREQUEST_P_H

#include "gluerequest_p.h"
#include "updateblueprintrequest.h"

namespace QtAws {
namespace Glue {

class UpdateBlueprintRequest;

class UpdateBlueprintRequestPrivate : public GlueRequestPrivate {

public:
    UpdateBlueprintRequestPrivate(const GlueRequest::Action action,
                                   UpdateBlueprintRequest * const q);
    UpdateBlueprintRequestPrivate(const UpdateBlueprintRequestPrivate &other,
                                   UpdateBlueprintRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBlueprintRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
