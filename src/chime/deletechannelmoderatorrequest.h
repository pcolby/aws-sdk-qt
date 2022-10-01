// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMODERATORREQUEST_H
#define QTAWS_DELETECHANNELMODERATORREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteChannelModeratorRequestPrivate;

class QTAWSCHIME_EXPORT DeleteChannelModeratorRequest : public ChimeRequest {

public:
    DeleteChannelModeratorRequest(const DeleteChannelModeratorRequest &other);
    DeleteChannelModeratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelModeratorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
