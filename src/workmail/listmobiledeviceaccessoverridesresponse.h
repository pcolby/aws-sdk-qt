// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMOBILEDEVICEACCESSOVERRIDESRESPONSE_H
#define QTAWS_LISTMOBILEDEVICEACCESSOVERRIDESRESPONSE_H

#include "workmailresponse.h"
#include "listmobiledeviceaccessoverridesrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMobileDeviceAccessOverridesResponsePrivate;

class QTAWSWORKMAIL_EXPORT ListMobileDeviceAccessOverridesResponse : public WorkMailResponse {
    Q_OBJECT

public:
    ListMobileDeviceAccessOverridesResponse(const ListMobileDeviceAccessOverridesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMobileDeviceAccessOverridesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMobileDeviceAccessOverridesResponse)
    Q_DISABLE_COPY(ListMobileDeviceAccessOverridesResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
