// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEBOTREQUEST_H
#define QTAWS_ASSOCIATEBOTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class AssociateBotRequestPrivate;

class QTAWSCONNECT_EXPORT AssociateBotRequest : public ConnectRequest {

public:
    AssociateBotRequest(const AssociateBotRequest &other);
    AssociateBotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateBotRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
