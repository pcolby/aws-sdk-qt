// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVPCECONFIGURATIONSRESPONSE_H
#define QTAWS_LISTVPCECONFIGURATIONSRESPONSE_H

#include "devicefarmresponse.h"
#include "listvpceconfigurationsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListVPCEConfigurationsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListVPCEConfigurationsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListVPCEConfigurationsResponse(const ListVPCEConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVPCEConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVPCEConfigurationsResponse)
    Q_DISABLE_COPY(ListVPCEConfigurationsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
