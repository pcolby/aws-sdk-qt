// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONRESPONSE_H
#define QTAWS_GETSESSIONRESPONSE_H

#include "lexruntimeresponse.h"
#include "getsessionrequest.h"

namespace QtAws {
namespace LexRuntime {

class GetSessionResponsePrivate;

class QTAWSLEXRUNTIME_EXPORT GetSessionResponse : public LexRuntimeResponse {
    Q_OBJECT

public:
    GetSessionResponse(const GetSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSessionResponse)
    Q_DISABLE_COPY(GetSessionResponse)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
