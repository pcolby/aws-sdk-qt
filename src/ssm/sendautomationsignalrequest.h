// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDAUTOMATIONSIGNALREQUEST_H
#define QTAWS_SENDAUTOMATIONSIGNALREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class SendAutomationSignalRequestPrivate;

class QTAWSSSM_EXPORT SendAutomationSignalRequest : public SsmRequest {

public:
    SendAutomationSignalRequest(const SendAutomationSignalRequest &other);
    SendAutomationSignalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendAutomationSignalRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
