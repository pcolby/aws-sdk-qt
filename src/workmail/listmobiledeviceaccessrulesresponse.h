// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMOBILEDEVICEACCESSRULESRESPONSE_H
#define QTAWS_LISTMOBILEDEVICEACCESSRULESRESPONSE_H

#include "workmailresponse.h"
#include "listmobiledeviceaccessrulesrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMobileDeviceAccessRulesResponsePrivate;

class QTAWSWORKMAIL_EXPORT ListMobileDeviceAccessRulesResponse : public WorkMailResponse {
    Q_OBJECT

public:
    ListMobileDeviceAccessRulesResponse(const ListMobileDeviceAccessRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMobileDeviceAccessRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMobileDeviceAccessRulesResponse)
    Q_DISABLE_COPY(ListMobileDeviceAccessRulesResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
