// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELANGUAGEMODELRESPONSE_H
#define QTAWS_DELETELANGUAGEMODELRESPONSE_H

#include "transcriberesponse.h"
#include "deletelanguagemodelrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteLanguageModelResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteLanguageModelResponse : public TranscribeResponse {
    Q_OBJECT

public:
    DeleteLanguageModelResponse(const DeleteLanguageModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLanguageModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLanguageModelResponse)
    Q_DISABLE_COPY(DeleteLanguageModelResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
