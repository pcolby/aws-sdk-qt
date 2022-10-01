// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETYPERESPONSE_H
#define QTAWS_UPDATETYPERESPONSE_H

#include "appsyncresponse.h"
#include "updatetyperequest.h"

namespace QtAws {
namespace AppSync {

class UpdateTypeResponsePrivate;

class QTAWSAPPSYNC_EXPORT UpdateTypeResponse : public AppSyncResponse {
    Q_OBJECT

public:
    UpdateTypeResponse(const UpdateTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTypeResponse)
    Q_DISABLE_COPY(UpdateTypeResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
