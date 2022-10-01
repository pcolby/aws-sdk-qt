// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELANGUAGEMODELREQUEST_P_H
#define QTAWS_DELETELANGUAGEMODELREQUEST_P_H

#include "transcriberequest_p.h"
#include "deletelanguagemodelrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteLanguageModelRequest;

class DeleteLanguageModelRequestPrivate : public TranscribeRequestPrivate {

public:
    DeleteLanguageModelRequestPrivate(const TranscribeRequest::Action action,
                                   DeleteLanguageModelRequest * const q);
    DeleteLanguageModelRequestPrivate(const DeleteLanguageModelRequestPrivate &other,
                                   DeleteLanguageModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLanguageModelRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
