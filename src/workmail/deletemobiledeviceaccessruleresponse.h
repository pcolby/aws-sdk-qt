// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMOBILEDEVICEACCESSRULERESPONSE_H
#define QTAWS_DELETEMOBILEDEVICEACCESSRULERESPONSE_H

#include "workmailresponse.h"
#include "deletemobiledeviceaccessrulerequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteMobileDeviceAccessRuleResponsePrivate;

class QTAWSWORKMAIL_EXPORT DeleteMobileDeviceAccessRuleResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DeleteMobileDeviceAccessRuleResponse(const DeleteMobileDeviceAccessRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMobileDeviceAccessRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMobileDeviceAccessRuleResponse)
    Q_DISABLE_COPY(DeleteMobileDeviceAccessRuleResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
