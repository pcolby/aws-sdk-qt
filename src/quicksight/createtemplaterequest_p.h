// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATEREQUEST_P_H
#define QTAWS_CREATETEMPLATEREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createtemplaterequest.h"

namespace QtAws {
namespace QuickSight {

class CreateTemplateRequest;

class CreateTemplateRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateTemplateRequestPrivate(const QuickSightRequest::Action action,
                                   CreateTemplateRequest * const q);
    CreateTemplateRequestPrivate(const CreateTemplateRequestPrivate &other,
                                   CreateTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTemplateRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
