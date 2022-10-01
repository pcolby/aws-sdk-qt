// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONHDFSRESPONSE_H
#define QTAWS_UPDATELOCATIONHDFSRESPONSE_H

#include "datasyncresponse.h"
#include "updatelocationhdfsrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationHdfsResponsePrivate;

class QTAWSDATASYNC_EXPORT UpdateLocationHdfsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    UpdateLocationHdfsResponse(const UpdateLocationHdfsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLocationHdfsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLocationHdfsResponse)
    Q_DISABLE_COPY(UpdateLocationHdfsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
