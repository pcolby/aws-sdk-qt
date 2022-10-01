// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOREQUEST_H
#define QTAWS_GETSTUDIOREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class GetStudioRequestPrivate;

class QTAWSNIMBLE_EXPORT GetStudioRequest : public NimbleRequest {

public:
    GetStudioRequest(const GetStudioRequest &other);
    GetStudioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStudioRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
