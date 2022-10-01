// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONSMBRESPONSE_H
#define QTAWS_UPDATELOCATIONSMBRESPONSE_H

#include "datasyncresponse.h"
#include "updatelocationsmbrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationSmbResponsePrivate;

class QTAWSDATASYNC_EXPORT UpdateLocationSmbResponse : public DataSyncResponse {
    Q_OBJECT

public:
    UpdateLocationSmbResponse(const UpdateLocationSmbRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLocationSmbRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLocationSmbResponse)
    Q_DISABLE_COPY(UpdateLocationSmbResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
