// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELEXBOTREQUEST_H
#define QTAWS_DISASSOCIATELEXBOTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateLexBotRequestPrivate;

class QTAWSCONNECT_EXPORT DisassociateLexBotRequest : public ConnectRequest {

public:
    DisassociateLexBotRequest(const DisassociateLexBotRequest &other);
    DisassociateLexBotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateLexBotRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
