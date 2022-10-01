// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXLUSTRERESPONSE_H
#define QTAWS_CREATELOCATIONFSXLUSTRERESPONSE_H

#include "datasyncresponse.h"
#include "createlocationfsxlustrerequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxLustreResponsePrivate;

class QTAWSDATASYNC_EXPORT CreateLocationFsxLustreResponse : public DataSyncResponse {
    Q_OBJECT

public:
    CreateLocationFsxLustreResponse(const CreateLocationFsxLustreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocationFsxLustreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationFsxLustreResponse)
    Q_DISABLE_COPY(CreateLocationFsxLustreResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
