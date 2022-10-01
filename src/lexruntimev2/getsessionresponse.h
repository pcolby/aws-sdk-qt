// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONRESPONSE_H
#define QTAWS_GETSESSIONRESPONSE_H

#include "lexruntimev2response.h"
#include "getsessionrequest.h"

namespace QtAws {
namespace LexRuntimeV2 {

class GetSessionResponsePrivate;

class QTAWSLEXRUNTIMEV2_EXPORT GetSessionResponse : public LexRuntimeV2Response {
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

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
