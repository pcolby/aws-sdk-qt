// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATEREQUEST_P_H
#define QTAWS_GETTEMPLATEREQUEST_P_H

#include "sesrequest_p.h"
#include "gettemplaterequest.h"

namespace QtAws {
namespace Ses {

class GetTemplateRequest;

class GetTemplateRequestPrivate : public SesRequestPrivate {

public:
    GetTemplateRequestPrivate(const SesRequest::Action action,
                                   GetTemplateRequest * const q);
    GetTemplateRequestPrivate(const GetTemplateRequestPrivate &other,
                                   GetTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
