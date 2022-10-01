// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLEXICONRESPONSE_H
#define QTAWS_PUTLEXICONRESPONSE_H

#include "pollyresponse.h"
#include "putlexiconrequest.h"

namespace QtAws {
namespace Polly {

class PutLexiconResponsePrivate;

class QTAWSPOLLY_EXPORT PutLexiconResponse : public PollyResponse {
    Q_OBJECT

public:
    PutLexiconResponse(const PutLexiconRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutLexiconRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLexiconResponse)
    Q_DISABLE_COPY(PutLexiconResponse)

};

} // namespace Polly
} // namespace QtAws

#endif
