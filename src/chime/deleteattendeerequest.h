// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTENDEEREQUEST_H
#define QTAWS_DELETEATTENDEEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteAttendeeRequestPrivate;

class QTAWSCHIME_EXPORT DeleteAttendeeRequest : public ChimeRequest {

public:
    DeleteAttendeeRequest(const DeleteAttendeeRequest &other);
    DeleteAttendeeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAttendeeRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
