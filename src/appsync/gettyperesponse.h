// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTYPERESPONSE_H
#define QTAWS_GETTYPERESPONSE_H

#include "appsyncresponse.h"
#include "gettyperequest.h"

namespace QtAws {
namespace AppSync {

class GetTypeResponsePrivate;

class QTAWSAPPSYNC_EXPORT GetTypeResponse : public AppSyncResponse {
    Q_OBJECT

public:
    GetTypeResponse(const GetTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTypeResponse)
    Q_DISABLE_COPY(GetTypeResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
