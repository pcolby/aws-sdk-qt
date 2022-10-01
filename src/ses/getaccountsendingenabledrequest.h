// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSENDINGENABLEDREQUEST_H
#define QTAWS_GETACCOUNTSENDINGENABLEDREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class GetAccountSendingEnabledRequestPrivate;

class QTAWSSES_EXPORT GetAccountSendingEnabledRequest : public SesRequest {

public:
    GetAccountSendingEnabledRequest(const GetAccountSendingEnabledRequest &other);
    GetAccountSendingEnabledRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountSendingEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
