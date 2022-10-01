// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELREQUEST_H
#define QTAWS_CREATECHANNELREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateChannelRequestPrivate;

class QTAWSCHIME_EXPORT CreateChannelRequest : public ChimeRequest {

public:
    CreateChannelRequest(const CreateChannelRequest &other);
    CreateChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChannelRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
