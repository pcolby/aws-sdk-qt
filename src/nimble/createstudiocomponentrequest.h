// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOCOMPONENTREQUEST_H
#define QTAWS_CREATESTUDIOCOMPONENTREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class CreateStudioComponentRequestPrivate;

class QTAWSNIMBLE_EXPORT CreateStudioComponentRequest : public NimbleRequest {

public:
    CreateStudioComponentRequest(const CreateStudioComponentRequest &other);
    CreateStudioComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStudioComponentRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
