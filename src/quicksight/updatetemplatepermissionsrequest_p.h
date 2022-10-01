// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEPERMISSIONSREQUEST_P_H
#define QTAWS_UPDATETEMPLATEPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updatetemplatepermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateTemplatePermissionsRequest;

class UpdateTemplatePermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateTemplatePermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateTemplatePermissionsRequest * const q);
    UpdateTemplatePermissionsRequestPrivate(const UpdateTemplatePermissionsRequestPrivate &other,
                                   UpdateTemplatePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTemplatePermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
