// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCONTENTRESPONSE_H
#define QTAWS_POSTCONTENTRESPONSE_H

#include "lexruntimeresponse.h"
#include "postcontentrequest.h"

namespace QtAws {
namespace LexRuntime {

class PostContentResponsePrivate;

class QTAWSLEXRUNTIME_EXPORT PostContentResponse : public LexRuntimeResponse {
    Q_OBJECT

public:
    PostContentResponse(const PostContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PostContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostContentResponse)
    Q_DISABLE_COPY(PostContentResponse)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
