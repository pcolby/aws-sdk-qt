// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLANGUAGESRESPONSE_H
#define QTAWS_LISTLANGUAGESRESPONSE_H

#include "translateresponse.h"
#include "listlanguagesrequest.h"

namespace QtAws {
namespace Translate {

class ListLanguagesResponsePrivate;

class QTAWSTRANSLATE_EXPORT ListLanguagesResponse : public TranslateResponse {
    Q_OBJECT

public:
    ListLanguagesResponse(const ListLanguagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLanguagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLanguagesResponse)
    Q_DISABLE_COPY(ListLanguagesResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
