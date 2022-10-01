// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAREPOSITORYTASKRESPONSE_H
#define QTAWS_CREATEDATAREPOSITORYTASKRESPONSE_H

#include "fsxresponse.h"
#include "createdatarepositorytaskrequest.h"

namespace QtAws {
namespace FSx {

class CreateDataRepositoryTaskResponsePrivate;

class QTAWSFSX_EXPORT CreateDataRepositoryTaskResponse : public FSxResponse {
    Q_OBJECT

public:
    CreateDataRepositoryTaskResponse(const CreateDataRepositoryTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataRepositoryTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataRepositoryTaskResponse)
    Q_DISABLE_COPY(CreateDataRepositoryTaskResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
