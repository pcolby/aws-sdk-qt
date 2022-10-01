// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHANNELREQUEST_H
#define QTAWS_STARTCHANNELREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class StartChannelRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT StartChannelRequest : public MediaTailorRequest {

public:
    StartChannelRequest(const StartChannelRequest &other);
    StartChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartChannelRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
