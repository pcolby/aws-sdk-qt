// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERRESPONSE_H
#define QTAWS_DELETERESOLVERRESPONSE_H

#include "appsyncresponse.h"
#include "deleteresolverrequest.h"

namespace QtAws {
namespace AppSync {

class DeleteResolverResponsePrivate;

class QTAWSAPPSYNC_EXPORT DeleteResolverResponse : public AppSyncResponse {
    Q_OBJECT

public:
    DeleteResolverResponse(const DeleteResolverRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResolverRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResolverResponse)
    Q_DISABLE_COPY(DeleteResolverResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
