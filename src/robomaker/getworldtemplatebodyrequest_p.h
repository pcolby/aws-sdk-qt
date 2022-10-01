// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORLDTEMPLATEBODYREQUEST_P_H
#define QTAWS_GETWORLDTEMPLATEBODYREQUEST_P_H

#include "robomakerrequest_p.h"
#include "getworldtemplatebodyrequest.h"

namespace QtAws {
namespace RoboMaker {

class GetWorldTemplateBodyRequest;

class GetWorldTemplateBodyRequestPrivate : public RoboMakerRequestPrivate {

public:
    GetWorldTemplateBodyRequestPrivate(const RoboMakerRequest::Action action,
                                   GetWorldTemplateBodyRequest * const q);
    GetWorldTemplateBodyRequestPrivate(const GetWorldTemplateBodyRequestPrivate &other,
                                   GetWorldTemplateBodyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorldTemplateBodyRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
