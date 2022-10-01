// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEALIASREQUEST_P_H
#define QTAWS_UPDATETEMPLATEALIASREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updatetemplatealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateTemplateAliasRequest;

class UpdateTemplateAliasRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateTemplateAliasRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateTemplateAliasRequest * const q);
    UpdateTemplateAliasRequestPrivate(const UpdateTemplateAliasRequestPrivate &other,
                                   UpdateTemplateAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTemplateAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
