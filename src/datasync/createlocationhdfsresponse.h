// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONHDFSRESPONSE_H
#define QTAWS_CREATELOCATIONHDFSRESPONSE_H

#include "datasyncresponse.h"
#include "createlocationhdfsrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationHdfsResponsePrivate;

class QTAWSDATASYNC_EXPORT CreateLocationHdfsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    CreateLocationHdfsResponse(const CreateLocationHdfsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocationHdfsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationHdfsResponse)
    Q_DISABLE_COPY(CreateLocationHdfsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
