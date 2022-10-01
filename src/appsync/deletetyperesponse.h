// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETYPERESPONSE_H
#define QTAWS_DELETETYPERESPONSE_H

#include "appsyncresponse.h"
#include "deletetyperequest.h"

namespace QtAws {
namespace AppSync {

class DeleteTypeResponsePrivate;

class QTAWSAPPSYNC_EXPORT DeleteTypeResponse : public AppSyncResponse {
    Q_OBJECT

public:
    DeleteTypeResponse(const DeleteTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTypeResponse)
    Q_DISABLE_COPY(DeleteTypeResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
