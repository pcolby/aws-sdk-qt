// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDATAREPOSITORYTASKRESPONSE_H
#define QTAWS_CANCELDATAREPOSITORYTASKRESPONSE_H

#include "fsxresponse.h"
#include "canceldatarepositorytaskrequest.h"

namespace QtAws {
namespace FSx {

class CancelDataRepositoryTaskResponsePrivate;

class QTAWSFSX_EXPORT CancelDataRepositoryTaskResponse : public FSxResponse {
    Q_OBJECT

public:
    CancelDataRepositoryTaskResponse(const CancelDataRepositoryTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelDataRepositoryTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelDataRepositoryTaskResponse)
    Q_DISABLE_COPY(CancelDataRepositoryTaskResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
