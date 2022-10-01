// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEATTENDEEREQUEST_H
#define QTAWS_CREATEATTENDEEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateAttendeeRequestPrivate;

class QTAWSCHIME_EXPORT CreateAttendeeRequest : public ChimeRequest {

public:
    CreateAttendeeRequest(const CreateAttendeeRequest &other);
    CreateAttendeeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAttendeeRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
