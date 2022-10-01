// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGATTENDEEREQUEST_H
#define QTAWS_UNTAGATTENDEEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UntagAttendeeRequestPrivate;

class QTAWSCHIME_EXPORT UntagAttendeeRequest : public ChimeRequest {

public:
    UntagAttendeeRequest(const UntagAttendeeRequest &other);
    UntagAttendeeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagAttendeeRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
