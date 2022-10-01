// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDRAWEMAILREQUEST_H
#define QTAWS_SENDRAWEMAILREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class SendRawEmailRequestPrivate;

class QTAWSSES_EXPORT SendRawEmailRequest : public SesRequest {

public:
    SendRawEmailRequest(const SendRawEmailRequest &other);
    SendRawEmailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendRawEmailRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
