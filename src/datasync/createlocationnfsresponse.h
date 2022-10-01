// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONNFSRESPONSE_H
#define QTAWS_CREATELOCATIONNFSRESPONSE_H

#include "datasyncresponse.h"
#include "createlocationnfsrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationNfsResponsePrivate;

class QTAWSDATASYNC_EXPORT CreateLocationNfsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    CreateLocationNfsResponse(const CreateLocationNfsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocationNfsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationNfsResponse)
    Q_DISABLE_COPY(CreateLocationNfsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
