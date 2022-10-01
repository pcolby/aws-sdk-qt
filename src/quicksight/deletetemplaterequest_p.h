// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATEREQUEST_P_H
#define QTAWS_DELETETEMPLATEREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deletetemplaterequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteTemplateRequest;

class DeleteTemplateRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteTemplateRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteTemplateRequest * const q);
    DeleteTemplateRequestPrivate(const DeleteTemplateRequestPrivate &other,
                                   DeleteTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTemplateRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
