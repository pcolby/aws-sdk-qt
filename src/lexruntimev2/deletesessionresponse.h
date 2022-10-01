// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESESSIONRESPONSE_H
#define QTAWS_DELETESESSIONRESPONSE_H

#include "lexruntimev2response.h"
#include "deletesessionrequest.h"

namespace QtAws {
namespace LexRuntimeV2 {

class DeleteSessionResponsePrivate;

class QTAWSLEXRUNTIMEV2_EXPORT DeleteSessionResponse : public LexRuntimeV2Response {
    Q_OBJECT

public:
    DeleteSessionResponse(const DeleteSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSessionResponse)
    Q_DISABLE_COPY(DeleteSessionResponse)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
