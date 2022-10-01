// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERADIUSRESPONSE_H
#define QTAWS_UPDATERADIUSRESPONSE_H

#include "directoryserviceresponse.h"
#include "updateradiusrequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateRadiusResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT UpdateRadiusResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    UpdateRadiusResponse(const UpdateRadiusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRadiusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRadiusResponse)
    Q_DISABLE_COPY(UpdateRadiusResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
