// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMOBILEDEVICEACCESSRULERESPONSE_H
#define QTAWS_CREATEMOBILEDEVICEACCESSRULERESPONSE_H

#include "workmailresponse.h"
#include "createmobiledeviceaccessrulerequest.h"

namespace QtAws {
namespace WorkMail {

class CreateMobileDeviceAccessRuleResponsePrivate;

class QTAWSWORKMAIL_EXPORT CreateMobileDeviceAccessRuleResponse : public WorkMailResponse {
    Q_OBJECT

public:
    CreateMobileDeviceAccessRuleResponse(const CreateMobileDeviceAccessRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMobileDeviceAccessRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMobileDeviceAccessRuleResponse)
    Q_DISABLE_COPY(CreateMobileDeviceAccessRuleResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
