// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERRESPONSE_H
#define QTAWS_UPDATERESOLVERRESPONSE_H

#include "appsyncresponse.h"
#include "updateresolverrequest.h"

namespace QtAws {
namespace AppSync {

class UpdateResolverResponsePrivate;

class QTAWSAPPSYNC_EXPORT UpdateResolverResponse : public AppSyncResponse {
    Q_OBJECT

public:
    UpdateResolverResponse(const UpdateResolverRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResolverRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResolverResponse)
    Q_DISABLE_COPY(UpdateResolverResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
