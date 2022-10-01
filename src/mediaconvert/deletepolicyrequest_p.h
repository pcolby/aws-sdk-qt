// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOLICYREQUEST_P_H
#define QTAWS_DELETEPOLICYREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "deletepolicyrequest.h"

namespace QtAws {
namespace MediaConvert {

class DeletePolicyRequest;

class DeletePolicyRequestPrivate : public MediaConvertRequestPrivate {

public:
    DeletePolicyRequestPrivate(const MediaConvertRequest::Action action,
                                   DeletePolicyRequest * const q);
    DeletePolicyRequestPrivate(const DeletePolicyRequestPrivate &other,
                                   DeletePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePolicyRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
