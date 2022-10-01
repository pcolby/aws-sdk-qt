// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESMBSETTINGSRESPONSE_H
#define QTAWS_DESCRIBESMBSETTINGSRESPONSE_H

#include "storagegatewayresponse.h"
#include "describesmbsettingsrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSMBSettingsResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeSMBSettingsResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeSMBSettingsResponse(const DescribeSMBSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSMBSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSMBSettingsResponse)
    Q_DISABLE_COPY(DescribeSMBSettingsResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
