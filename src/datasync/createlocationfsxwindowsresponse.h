// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXWINDOWSRESPONSE_H
#define QTAWS_CREATELOCATIONFSXWINDOWSRESPONSE_H

#include "datasyncresponse.h"
#include "createlocationfsxwindowsrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxWindowsResponsePrivate;

class QTAWSDATASYNC_EXPORT CreateLocationFsxWindowsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    CreateLocationFsxWindowsResponse(const CreateLocationFsxWindowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocationFsxWindowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationFsxWindowsResponse)
    Q_DISABLE_COPY(CreateLocationFsxWindowsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
