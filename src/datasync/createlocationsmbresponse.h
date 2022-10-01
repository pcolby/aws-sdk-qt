// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONSMBRESPONSE_H
#define QTAWS_CREATELOCATIONSMBRESPONSE_H

#include "datasyncresponse.h"
#include "createlocationsmbrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationSmbResponsePrivate;

class QTAWSDATASYNC_EXPORT CreateLocationSmbResponse : public DataSyncResponse {
    Q_OBJECT

public:
    CreateLocationSmbResponse(const CreateLocationSmbRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocationSmbRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationSmbResponse)
    Q_DISABLE_COPY(CreateLocationSmbResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
