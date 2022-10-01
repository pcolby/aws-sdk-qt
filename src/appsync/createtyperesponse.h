// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETYPERESPONSE_H
#define QTAWS_CREATETYPERESPONSE_H

#include "appsyncresponse.h"
#include "createtyperequest.h"

namespace QtAws {
namespace AppSync {

class CreateTypeResponsePrivate;

class QTAWSAPPSYNC_EXPORT CreateTypeResponse : public AppSyncResponse {
    Q_OBJECT

public:
    CreateTypeResponse(const CreateTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTypeResponse)
    Q_DISABLE_COPY(CreateTypeResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
