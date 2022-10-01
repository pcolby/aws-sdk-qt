// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEREQUEST_P_H
#define QTAWS_UPDATETEMPLATEREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updatetemplaterequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateTemplateRequest;

class UpdateTemplateRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateTemplateRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateTemplateRequest * const q);
    UpdateTemplateRequestPrivate(const UpdateTemplateRequestPrivate &other,
                                   UpdateTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTemplateRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
