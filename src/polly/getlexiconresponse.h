// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLEXICONRESPONSE_H
#define QTAWS_GETLEXICONRESPONSE_H

#include "pollyresponse.h"
#include "getlexiconrequest.h"

namespace QtAws {
namespace Polly {

class GetLexiconResponsePrivate;

class QTAWSPOLLY_EXPORT GetLexiconResponse : public PollyResponse {
    Q_OBJECT

public:
    GetLexiconResponse(const GetLexiconRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLexiconRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLexiconResponse)
    Q_DISABLE_COPY(GetLexiconResponse)

};

} // namespace Polly
} // namespace QtAws

#endif
