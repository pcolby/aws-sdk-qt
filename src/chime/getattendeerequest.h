// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTENDEEREQUEST_H
#define QTAWS_GETATTENDEEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetAttendeeRequestPrivate;

class QTAWSCHIME_EXPORT GetAttendeeRequest : public ChimeRequest {

public:
    GetAttendeeRequest(const GetAttendeeRequest &other);
    GetAttendeeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAttendeeRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
