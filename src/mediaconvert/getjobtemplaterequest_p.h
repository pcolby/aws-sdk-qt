// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBTEMPLATEREQUEST_P_H
#define QTAWS_GETJOBTEMPLATEREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "getjobtemplaterequest.h"

namespace QtAws {
namespace MediaConvert {

class GetJobTemplateRequest;

class GetJobTemplateRequestPrivate : public MediaConvertRequestPrivate {

public:
    GetJobTemplateRequestPrivate(const MediaConvertRequest::Action action,
                                   GetJobTemplateRequest * const q);
    GetJobTemplateRequestPrivate(const GetJobTemplateRequestPrivate &other,
                                   GetJobTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobTemplateRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
