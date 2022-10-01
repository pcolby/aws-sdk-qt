// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTEMPLATEDEMAILREQUEST_H
#define QTAWS_SENDTEMPLATEDEMAILREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class SendTemplatedEmailRequestPrivate;

class QTAWSSES_EXPORT SendTemplatedEmailRequest : public SesRequest {

public:
    SendTemplatedEmailRequest(const SendTemplatedEmailRequest &other);
    SendTemplatedEmailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendTemplatedEmailRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
