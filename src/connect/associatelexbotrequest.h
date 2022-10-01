// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELEXBOTREQUEST_H
#define QTAWS_ASSOCIATELEXBOTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class AssociateLexBotRequestPrivate;

class QTAWSCONNECT_EXPORT AssociateLexBotRequest : public ConnectRequest {

public:
    AssociateLexBotRequest(const AssociateLexBotRequest &other);
    AssociateLexBotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateLexBotRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
