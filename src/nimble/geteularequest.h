// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEULAREQUEST_H
#define QTAWS_GETEULAREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class GetEulaRequestPrivate;

class QTAWSNIMBLE_EXPORT GetEulaRequest : public NimbleRequest {

public:
    GetEulaRequest(const GetEulaRequest &other);
    GetEulaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEulaRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
