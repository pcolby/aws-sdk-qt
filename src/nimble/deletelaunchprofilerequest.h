// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHPROFILEREQUEST_H
#define QTAWS_DELETELAUNCHPROFILEREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class DeleteLaunchProfileRequestPrivate;

class QTAWSNIMBLE_EXPORT DeleteLaunchProfileRequest : public NimbleRequest {

public:
    DeleteLaunchProfileRequest(const DeleteLaunchProfileRequest &other);
    DeleteLaunchProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLaunchProfileRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
