// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELANGUAGEMODELREQUEST_P_H
#define QTAWS_CREATELANGUAGEMODELREQUEST_P_H

#include "transcriberequest_p.h"
#include "createlanguagemodelrequest.h"

namespace QtAws {
namespace Transcribe {

class CreateLanguageModelRequest;

class CreateLanguageModelRequestPrivate : public TranscribeRequestPrivate {

public:
    CreateLanguageModelRequestPrivate(const TranscribeRequest::Action action,
                                   CreateLanguageModelRequest * const q);
    CreateLanguageModelRequestPrivate(const CreateLanguageModelRequestPrivate &other,
                                   CreateLanguageModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLanguageModelRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
