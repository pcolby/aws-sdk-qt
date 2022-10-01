// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGMEETINGREQUEST_H
#define QTAWS_UNTAGMEETINGREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UntagMeetingRequestPrivate;

class QTAWSCHIME_EXPORT UntagMeetingRequest : public ChimeRequest {

public:
    UntagMeetingRequest(const UntagMeetingRequest &other);
    UntagMeetingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagMeetingRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
