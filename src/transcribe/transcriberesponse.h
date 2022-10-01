// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSCRIBERESPONSE_H
#define QTAWS_TRANSCRIBERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawstranscribeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Transcribe {

class TranscribeResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT TranscribeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    TranscribeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    TranscribeResponse(TranscribeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TranscribeResponse)
    Q_DISABLE_COPY(TranscribeResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
