// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSESSIONRESPONSE_H
#define QTAWS_PUTSESSIONRESPONSE_H

#include "lexruntimeresponse.h"
#include "putsessionrequest.h"

namespace QtAws {
namespace LexRuntime {

class PutSessionResponsePrivate;

class QTAWSLEXRUNTIME_EXPORT PutSessionResponse : public LexRuntimeResponse {
    Q_OBJECT

public:
    PutSessionResponse(const PutSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSessionResponse)
    Q_DISABLE_COPY(PutSessionResponse)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
