// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONNFSRESPONSE_H
#define QTAWS_UPDATELOCATIONNFSRESPONSE_H

#include "datasyncresponse.h"
#include "updatelocationnfsrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationNfsResponsePrivate;

class QTAWSDATASYNC_EXPORT UpdateLocationNfsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    UpdateLocationNfsResponse(const UpdateLocationNfsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLocationNfsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLocationNfsResponse)
    Q_DISABLE_COPY(UpdateLocationNfsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
