// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORLDTEMPLATEREQUEST_P_H
#define QTAWS_UPDATEWORLDTEMPLATEREQUEST_P_H

#include "robomakerrequest_p.h"
#include "updateworldtemplaterequest.h"

namespace QtAws {
namespace RoboMaker {

class UpdateWorldTemplateRequest;

class UpdateWorldTemplateRequestPrivate : public RoboMakerRequestPrivate {

public:
    UpdateWorldTemplateRequestPrivate(const RoboMakerRequest::Action action,
                                   UpdateWorldTemplateRequest * const q);
    UpdateWorldTemplateRequestPrivate(const UpdateWorldTemplateRequestPrivate &other,
                                   UpdateWorldTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorldTemplateRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
