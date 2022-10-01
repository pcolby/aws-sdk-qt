// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGMEETINGREQUEST_H
#define QTAWS_TAGMEETINGREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class TagMeetingRequestPrivate;

class QTAWSCHIME_EXPORT TagMeetingRequest : public ChimeRequest {

public:
    TagMeetingRequest(const TagMeetingRequest &other);
    TagMeetingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagMeetingRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
