// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATEALIASREQUEST_P_H
#define QTAWS_DELETETEMPLATEALIASREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deletetemplatealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteTemplateAliasRequest;

class DeleteTemplateAliasRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteTemplateAliasRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteTemplateAliasRequest * const q);
    DeleteTemplateAliasRequestPrivate(const DeleteTemplateAliasRequestPrivate &other,
                                   DeleteTemplateAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTemplateAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
