// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORLDTEMPLATEREQUEST_P_H
#define QTAWS_CREATEWORLDTEMPLATEREQUEST_P_H

#include "robomakerrequest_p.h"
#include "createworldtemplaterequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateWorldTemplateRequest;

class CreateWorldTemplateRequestPrivate : public RoboMakerRequestPrivate {

public:
    CreateWorldTemplateRequestPrivate(const RoboMakerRequest::Action action,
                                   CreateWorldTemplateRequest * const q);
    CreateWorldTemplateRequestPrivate(const CreateWorldTemplateRequestPrivate &other,
                                   CreateWorldTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorldTemplateRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
