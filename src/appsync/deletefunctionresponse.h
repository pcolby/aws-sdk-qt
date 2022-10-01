// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONRESPONSE_H
#define QTAWS_DELETEFUNCTIONRESPONSE_H

#include "appsyncresponse.h"
#include "deletefunctionrequest.h"

namespace QtAws {
namespace AppSync {

class DeleteFunctionResponsePrivate;

class QTAWSAPPSYNC_EXPORT DeleteFunctionResponse : public AppSyncResponse {
    Q_OBJECT

public:
    DeleteFunctionResponse(const DeleteFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFunctionResponse)
    Q_DISABLE_COPY(DeleteFunctionResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
