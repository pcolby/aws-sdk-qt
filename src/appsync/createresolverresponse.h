// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERRESPONSE_H
#define QTAWS_CREATERESOLVERRESPONSE_H

#include "appsyncresponse.h"
#include "createresolverrequest.h"

namespace QtAws {
namespace AppSync {

class CreateResolverResponsePrivate;

class QTAWSAPPSYNC_EXPORT CreateResolverResponse : public AppSyncResponse {
    Q_OBJECT

public:
    CreateResolverResponse(const CreateResolverRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResolverRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResolverResponse)
    Q_DISABLE_COPY(CreateResolverResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
