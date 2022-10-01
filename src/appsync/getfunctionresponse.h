// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONRESPONSE_H
#define QTAWS_GETFUNCTIONRESPONSE_H

#include "appsyncresponse.h"
#include "getfunctionrequest.h"

namespace QtAws {
namespace AppSync {

class GetFunctionResponsePrivate;

class QTAWSAPPSYNC_EXPORT GetFunctionResponse : public AppSyncResponse {
    Q_OBJECT

public:
    GetFunctionResponse(const GetFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionResponse)
    Q_DISABLE_COPY(GetFunctionResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
