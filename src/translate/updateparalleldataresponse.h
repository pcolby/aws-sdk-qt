// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARALLELDATARESPONSE_H
#define QTAWS_UPDATEPARALLELDATARESPONSE_H

#include "translateresponse.h"
#include "updateparalleldatarequest.h"

namespace QtAws {
namespace Translate {

class UpdateParallelDataResponsePrivate;

class QTAWSTRANSLATE_EXPORT UpdateParallelDataResponse : public TranslateResponse {
    Q_OBJECT

public:
    UpdateParallelDataResponse(const UpdateParallelDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateParallelDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateParallelDataResponse)
    Q_DISABLE_COPY(UpdateParallelDataResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
