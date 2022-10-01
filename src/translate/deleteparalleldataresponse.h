// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARALLELDATARESPONSE_H
#define QTAWS_DELETEPARALLELDATARESPONSE_H

#include "translateresponse.h"
#include "deleteparalleldatarequest.h"

namespace QtAws {
namespace Translate {

class DeleteParallelDataResponsePrivate;

class QTAWSTRANSLATE_EXPORT DeleteParallelDataResponse : public TranslateResponse {
    Q_OBJECT

public:
    DeleteParallelDataResponse(const DeleteParallelDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteParallelDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteParallelDataResponse)
    Q_DISABLE_COPY(DeleteParallelDataResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
