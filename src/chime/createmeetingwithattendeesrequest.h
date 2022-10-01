// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGWITHATTENDEESREQUEST_H
#define QTAWS_CREATEMEETINGWITHATTENDEESREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateMeetingWithAttendeesRequestPrivate;

class QTAWSCHIME_EXPORT CreateMeetingWithAttendeesRequest : public ChimeRequest {

public:
    CreateMeetingWithAttendeesRequest(const CreateMeetingWithAttendeesRequest &other);
    CreateMeetingWithAttendeesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMeetingWithAttendeesRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
