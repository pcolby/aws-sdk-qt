// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARALLELDATARESPONSE_H
#define QTAWS_LISTPARALLELDATARESPONSE_H

#include "translateresponse.h"
#include "listparalleldatarequest.h"

namespace QtAws {
namespace Translate {

class ListParallelDataResponsePrivate;

class QTAWSTRANSLATE_EXPORT ListParallelDataResponse : public TranslateResponse {
    Q_OBJECT

public:
    ListParallelDataResponse(const ListParallelDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListParallelDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListParallelDataResponse)
    Q_DISABLE_COPY(ListParallelDataResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
