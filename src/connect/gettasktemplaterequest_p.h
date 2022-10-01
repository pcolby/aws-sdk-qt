// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTASKTEMPLATEREQUEST_P_H
#define QTAWS_GETTASKTEMPLATEREQUEST_P_H

#include "connectrequest_p.h"
#include "gettasktemplaterequest.h"

namespace QtAws {
namespace Connect {

class GetTaskTemplateRequest;

class GetTaskTemplateRequestPrivate : public ConnectRequestPrivate {

public:
    GetTaskTemplateRequestPrivate(const ConnectRequest::Action action,
                                   GetTaskTemplateRequest * const q);
    GetTaskTemplateRequestPrivate(const GetTaskTemplateRequestPrivate &other,
                                   GetTaskTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTaskTemplateRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
