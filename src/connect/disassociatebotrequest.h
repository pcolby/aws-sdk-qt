// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEBOTREQUEST_H
#define QTAWS_DISASSOCIATEBOTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateBotRequestPrivate;

class QTAWSCONNECT_EXPORT DisassociateBotRequest : public ConnectRequest {

public:
    DisassociateBotRequest(const DisassociateBotRequest &other);
    DisassociateBotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateBotRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
