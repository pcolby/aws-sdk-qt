// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTREQUEST_P_H
#define QTAWS_UPDATECOMPONENTREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "updatecomponentrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class UpdateComponentRequest;

class UpdateComponentRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    UpdateComponentRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   UpdateComponentRequest * const q);
    UpdateComponentRequestPrivate(const UpdateComponentRequestPrivate &other,
                                   UpdateComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateComponentRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
