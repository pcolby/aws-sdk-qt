// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMOBILEDEVICEACCESSRULERESPONSE_H
#define QTAWS_UPDATEMOBILEDEVICEACCESSRULERESPONSE_H

#include "workmailresponse.h"
#include "updatemobiledeviceaccessrulerequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateMobileDeviceAccessRuleResponsePrivate;

class QTAWSWORKMAIL_EXPORT UpdateMobileDeviceAccessRuleResponse : public WorkMailResponse {
    Q_OBJECT

public:
    UpdateMobileDeviceAccessRuleResponse(const UpdateMobileDeviceAccessRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMobileDeviceAccessRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMobileDeviceAccessRuleResponse)
    Q_DISABLE_COPY(UpdateMobileDeviceAccessRuleResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
