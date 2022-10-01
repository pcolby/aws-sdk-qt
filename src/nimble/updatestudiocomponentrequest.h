// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIOCOMPONENTREQUEST_H
#define QTAWS_UPDATESTUDIOCOMPONENTREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class UpdateStudioComponentRequestPrivate;

class QTAWSNIMBLE_EXPORT UpdateStudioComponentRequest : public NimbleRequest {

public:
    UpdateStudioComponentRequest(const UpdateStudioComponentRequest &other);
    UpdateStudioComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStudioComponentRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
