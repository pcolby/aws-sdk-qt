// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATEALIASREQUEST_P_H
#define QTAWS_CREATETEMPLATEALIASREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createtemplatealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateTemplateAliasRequest;

class CreateTemplateAliasRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateTemplateAliasRequestPrivate(const QuickSightRequest::Action action,
                                   CreateTemplateAliasRequest * const q);
    CreateTemplateAliasRequestPrivate(const CreateTemplateAliasRequestPrivate &other,
                                   CreateTemplateAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTemplateAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
