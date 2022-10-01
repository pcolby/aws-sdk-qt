// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARALLELDATARESPONSE_H
#define QTAWS_GETPARALLELDATARESPONSE_H

#include "translateresponse.h"
#include "getparalleldatarequest.h"

namespace QtAws {
namespace Translate {

class GetParallelDataResponsePrivate;

class QTAWSTRANSLATE_EXPORT GetParallelDataResponse : public TranslateResponse {
    Q_OBJECT

public:
    GetParallelDataResponse(const GetParallelDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetParallelDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetParallelDataResponse)
    Q_DISABLE_COPY(GetParallelDataResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
