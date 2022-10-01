// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCATIONRESPONSE_H
#define QTAWS_DELETELOCATIONRESPONSE_H

#include "datasyncresponse.h"
#include "deletelocationrequest.h"

namespace QtAws {
namespace DataSync {

class DeleteLocationResponsePrivate;

class QTAWSDATASYNC_EXPORT DeleteLocationResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DeleteLocationResponse(const DeleteLocationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLocationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLocationResponse)
    Q_DISABLE_COPY(DeleteLocationResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
