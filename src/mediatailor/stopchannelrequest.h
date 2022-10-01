// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCHANNELREQUEST_H
#define QTAWS_STOPCHANNELREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class StopChannelRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT StopChannelRequest : public MediaTailorRequest {

public:
    StopChannelRequest(const StopChannelRequest &other);
    StopChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopChannelRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
