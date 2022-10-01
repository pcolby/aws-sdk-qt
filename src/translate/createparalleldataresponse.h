// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARALLELDATARESPONSE_H
#define QTAWS_CREATEPARALLELDATARESPONSE_H

#include "translateresponse.h"
#include "createparalleldatarequest.h"

namespace QtAws {
namespace Translate {

class CreateParallelDataResponsePrivate;

class QTAWSTRANSLATE_EXPORT CreateParallelDataResponse : public TranslateResponse {
    Q_OBJECT

public:
    CreateParallelDataResponse(const CreateParallelDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateParallelDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateParallelDataResponse)
    Q_DISABLE_COPY(CreateParallelDataResponse)

};

} // namespace Translate
} // namespace QtAws

#endif
