// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLERADIUSRESPONSE_H
#define QTAWS_DISABLERADIUSRESPONSE_H

#include "directoryserviceresponse.h"
#include "disableradiusrequest.h"

namespace QtAws {
namespace DirectoryService {

class DisableRadiusResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DisableRadiusResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DisableRadiusResponse(const DisableRadiusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableRadiusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableRadiusResponse)
    Q_DISABLE_COPY(DisableRadiusResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
