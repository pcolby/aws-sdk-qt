// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTTEXTRESPONSE_H
#define QTAWS_POSTTEXTRESPONSE_H

#include "lexruntimeresponse.h"
#include "posttextrequest.h"

namespace QtAws {
namespace LexRuntime {

class PostTextResponsePrivate;

class QTAWSLEXRUNTIME_EXPORT PostTextResponse : public LexRuntimeResponse {
    Q_OBJECT

public:
    PostTextResponse(const PostTextRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PostTextRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostTextResponse)
    Q_DISABLE_COPY(PostTextResponse)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
