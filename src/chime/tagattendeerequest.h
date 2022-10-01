// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGATTENDEEREQUEST_H
#define QTAWS_TAGATTENDEEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class TagAttendeeRequestPrivate;

class QTAWSCHIME_EXPORT TagAttendeeRequest : public ChimeRequest {

public:
    TagAttendeeRequest(const TagAttendeeRequest &other);
    TagAttendeeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagAttendeeRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
