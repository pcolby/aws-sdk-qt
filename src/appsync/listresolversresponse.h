// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERSRESPONSE_H
#define QTAWS_LISTRESOLVERSRESPONSE_H

#include "appsyncresponse.h"
#include "listresolversrequest.h"

namespace QtAws {
namespace AppSync {

class ListResolversResponsePrivate;

class QTAWSAPPSYNC_EXPORT ListResolversResponse : public AppSyncResponse {
    Q_OBJECT

public:
    ListResolversResponse(const ListResolversRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResolversRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolversResponse)
    Q_DISABLE_COPY(ListResolversResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
