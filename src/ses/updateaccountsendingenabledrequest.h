// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTSENDINGENABLEDREQUEST_H
#define QTAWS_UPDATEACCOUNTSENDINGENABLEDREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class UpdateAccountSendingEnabledRequestPrivate;

class QTAWSSES_EXPORT UpdateAccountSendingEnabledRequest : public SesRequest {

public:
    UpdateAccountSendingEnabledRequest(const UpdateAccountSendingEnabledRequest &other);
    UpdateAccountSendingEnabledRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccountSendingEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
