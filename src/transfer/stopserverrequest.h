// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSERVERREQUEST_H
#define QTAWS_STOPSERVERREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class StopServerRequestPrivate;

class QTAWSTRANSFER_EXPORT StopServerRequest : public TransferRequest {

public:
    StopServerRequest(const StopServerRequest &other);
    StopServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopServerRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
