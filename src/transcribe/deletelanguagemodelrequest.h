// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELANGUAGEMODELREQUEST_H
#define QTAWS_DELETELANGUAGEMODELREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteLanguageModelRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteLanguageModelRequest : public TranscribeRequest {

public:
    DeleteLanguageModelRequest(const DeleteLanguageModelRequest &other);
    DeleteLanguageModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLanguageModelRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
