// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOREQUEST_H
#define QTAWS_DELETESTUDIOREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStudioRequestPrivate;

class QTAWSNIMBLE_EXPORT DeleteStudioRequest : public NimbleRequest {

public:
    DeleteStudioRequest(const DeleteStudioRequest &other);
    DeleteStudioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStudioRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
