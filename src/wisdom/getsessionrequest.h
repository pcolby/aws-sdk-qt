// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONREQUEST_H
#define QTAWS_GETSESSIONREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class GetSessionRequestPrivate;

class QTAWSWISDOM_EXPORT GetSessionRequest : public WisdomRequest {

public:
    GetSessionRequest(const GetSessionRequest &other);
    GetSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSessionRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
