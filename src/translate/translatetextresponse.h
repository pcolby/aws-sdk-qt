// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSLATETEXTRESPONSE_H
#define QTAWS_TRANSLATETEXTRESPONSE_H

#include "translateresponse.h"
#include "translatetextrequest.h"

namespace QtAws {
namespace Translate {

class TranslateTextResponsePrivate;

class QTAWSTRANSLATE_EXPORT TranslateTextResponse : public TranslateResponse {
    Q_OBJECT

public:
    TranslateTextResponse(const TranslateTextRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TranslateTextRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TranslateTextResponse)
    Q_DISABLE_COPY(TranslateTextResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
