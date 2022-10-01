// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELREADMARKERREQUEST_H
#define QTAWS_UPDATECHANNELREADMARKERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateChannelReadMarkerRequestPrivate;

class QTAWSCHIME_EXPORT UpdateChannelReadMarkerRequest : public ChimeRequest {

public:
    UpdateChannelReadMarkerRequest(const UpdateChannelReadMarkerRequest &other);
    UpdateChannelReadMarkerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChannelReadMarkerRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
