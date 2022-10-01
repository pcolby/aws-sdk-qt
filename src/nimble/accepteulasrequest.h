// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTEULASREQUEST_H
#define QTAWS_ACCEPTEULASREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class AcceptEulasRequestPrivate;

class QTAWSNIMBLE_EXPORT AcceptEulasRequest : public NimbleRequest {

public:
    AcceptEulasRequest(const AcceptEulasRequest &other);
    AcceptEulasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptEulasRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
