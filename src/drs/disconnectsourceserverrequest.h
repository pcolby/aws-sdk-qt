// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTSOURCESERVERREQUEST_H
#define QTAWS_DISCONNECTSOURCESERVERREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class DisconnectSourceServerRequestPrivate;

class QTAWSDRS_EXPORT DisconnectSourceServerRequest : public DrsRequest {

public:
    DisconnectSourceServerRequest(const DisconnectSourceServerRequest &other);
    DisconnectSourceServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectSourceServerRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
