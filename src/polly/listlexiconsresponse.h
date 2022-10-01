// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLEXICONSRESPONSE_H
#define QTAWS_LISTLEXICONSRESPONSE_H

#include "pollyresponse.h"
#include "listlexiconsrequest.h"

namespace QtAws {
namespace Polly {

class ListLexiconsResponsePrivate;

class QTAWSPOLLY_EXPORT ListLexiconsResponse : public PollyResponse {
    Q_OBJECT

public:
    ListLexiconsResponse(const ListLexiconsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLexiconsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLexiconsResponse)
    Q_DISABLE_COPY(ListLexiconsResponse)

};

} // namespace Polly
} // namespace QtAws

#endif
