// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELANGUAGEMODELREQUEST_H
#define QTAWS_CREATELANGUAGEMODELREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class CreateLanguageModelRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT CreateLanguageModelRequest : public TranscribeRequest {

public:
    CreateLanguageModelRequest(const CreateLanguageModelRequest &other);
    CreateLanguageModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLanguageModelRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
