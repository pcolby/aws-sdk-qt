// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATEREQUEST_P_H
#define QTAWS_CREATETEMPLATEREQUEST_P_H

#include "sesrequest_p.h"
#include "createtemplaterequest.h"

namespace QtAws {
namespace Ses {

class CreateTemplateRequest;

class CreateTemplateRequestPrivate : public SesRequestPrivate {

public:
    CreateTemplateRequestPrivate(const SesRequest::Action action,
                                   CreateTemplateRequest * const q);
    CreateTemplateRequestPrivate(const CreateTemplateRequestPrivate &other,
                                   CreateTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
