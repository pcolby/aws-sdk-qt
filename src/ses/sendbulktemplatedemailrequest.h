// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBULKTEMPLATEDEMAILREQUEST_H
#define QTAWS_SENDBULKTEMPLATEDEMAILREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class SendBulkTemplatedEmailRequestPrivate;

class QTAWSSES_EXPORT SendBulkTemplatedEmailRequest : public SesRequest {

public:
    SendBulkTemplatedEmailRequest(const SendBulkTemplatedEmailRequest &other);
    SendBulkTemplatedEmailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendBulkTemplatedEmailRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
