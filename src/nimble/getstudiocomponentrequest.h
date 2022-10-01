// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOCOMPONENTREQUEST_H
#define QTAWS_GETSTUDIOCOMPONENTREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class GetStudioComponentRequestPrivate;

class QTAWSNIMBLE_EXPORT GetStudioComponentRequest : public NimbleRequest {

public:
    GetStudioComponentRequest(const GetStudioComponentRequest &other);
    GetStudioComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStudioComponentRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
