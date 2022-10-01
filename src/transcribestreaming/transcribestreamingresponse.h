// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSCRIBESTREAMINGRESPONSE_H
#define QTAWS_TRANSCRIBESTREAMINGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawstranscribestreamingglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace TranscribeStreaming {

class TranscribeStreamingResponsePrivate;

class QTAWSTRANSCRIBESTREAMING_EXPORT TranscribeStreamingResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    TranscribeStreamingResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    TranscribeStreamingResponse(TranscribeStreamingResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TranscribeStreamingResponse)
    Q_DISABLE_COPY(TranscribeStreamingResponse)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
