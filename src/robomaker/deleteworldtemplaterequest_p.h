// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORLDTEMPLATEREQUEST_P_H
#define QTAWS_DELETEWORLDTEMPLATEREQUEST_P_H

#include "robomakerrequest_p.h"
#include "deleteworldtemplaterequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteWorldTemplateRequest;

class DeleteWorldTemplateRequestPrivate : public RoboMakerRequestPrivate {

public:
    DeleteWorldTemplateRequestPrivate(const RoboMakerRequest::Action action,
                                   DeleteWorldTemplateRequest * const q);
    DeleteWorldTemplateRequestPrivate(const DeleteWorldTemplateRequestPrivate &other,
                                   DeleteWorldTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorldTemplateRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
