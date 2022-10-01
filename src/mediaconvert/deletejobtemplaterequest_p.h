// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBTEMPLATEREQUEST_P_H
#define QTAWS_DELETEJOBTEMPLATEREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "deletejobtemplaterequest.h"

namespace QtAws {
namespace MediaConvert {

class DeleteJobTemplateRequest;

class DeleteJobTemplateRequestPrivate : public MediaConvertRequestPrivate {

public:
    DeleteJobTemplateRequestPrivate(const MediaConvertRequest::Action action,
                                   DeleteJobTemplateRequest * const q);
    DeleteJobTemplateRequestPrivate(const DeleteJobTemplateRequestPrivate &other,
                                   DeleteJobTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteJobTemplateRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
