// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELMODERATORREQUEST_H
#define QTAWS_CREATECHANNELMODERATORREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateChannelModeratorRequestPrivate;

class QTAWSCHIME_EXPORT CreateChannelModeratorRequest : public ChimeRequest {

public:
    CreateChannelModeratorRequest(const CreateChannelModeratorRequest &other);
    CreateChannelModeratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChannelModeratorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
