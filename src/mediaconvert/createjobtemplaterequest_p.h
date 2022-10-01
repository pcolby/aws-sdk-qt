// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBTEMPLATEREQUEST_P_H
#define QTAWS_CREATEJOBTEMPLATEREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "createjobtemplaterequest.h"

namespace QtAws {
namespace MediaConvert {

class CreateJobTemplateRequest;

class CreateJobTemplateRequestPrivate : public MediaConvertRequestPrivate {

public:
    CreateJobTemplateRequestPrivate(const MediaConvertRequest::Action action,
                                   CreateJobTemplateRequest * const q);
    CreateJobTemplateRequestPrivate(const CreateJobTemplateRequestPrivate &other,
                                   CreateJobTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateJobTemplateRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
