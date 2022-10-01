// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXOPENZFSRESPONSE_H
#define QTAWS_CREATELOCATIONFSXOPENZFSRESPONSE_H

#include "datasyncresponse.h"
#include "createlocationfsxopenzfsrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxOpenZfsResponsePrivate;

class QTAWSDATASYNC_EXPORT CreateLocationFsxOpenZfsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    CreateLocationFsxOpenZfsResponse(const CreateLocationFsxOpenZfsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocationFsxOpenZfsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationFsxOpenZfsResponse)
    Q_DISABLE_COPY(CreateLocationFsxOpenZfsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
