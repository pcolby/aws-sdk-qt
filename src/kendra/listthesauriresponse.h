// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHESAURIRESPONSE_H
#define QTAWS_LISTTHESAURIRESPONSE_H

#include "kendraresponse.h"
#include "listthesaurirequest.h"

namespace QtAws {
namespace Kendra {

class ListThesauriResponsePrivate;

class QTAWSKENDRA_EXPORT ListThesauriResponse : public KendraResponse {
    Q_OBJECT

public:
    ListThesauriResponse(const ListThesauriRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThesauriRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThesauriResponse)
    Q_DISABLE_COPY(ListThesauriResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
