// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBTEMPLATEREQUEST_P_H
#define QTAWS_UPDATEJOBTEMPLATEREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "updatejobtemplaterequest.h"

namespace QtAws {
namespace MediaConvert {

class UpdateJobTemplateRequest;

class UpdateJobTemplateRequestPrivate : public MediaConvertRequestPrivate {

public:
    UpdateJobTemplateRequestPrivate(const MediaConvertRequest::Action action,
                                   UpdateJobTemplateRequest * const q);
    UpdateJobTemplateRequestPrivate(const UpdateJobTemplateRequestPrivate &other,
                                   UpdateJobTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateJobTemplateRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
