// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBULKEMAILREQUEST_H
#define QTAWS_SENDBULKEMAILREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class SendBulkEmailRequestPrivate;

class QTAWSSESV2_EXPORT SendBulkEmailRequest : public SESv2Request {

public:
    SendBulkEmailRequest(const SendBulkEmailRequest &other);
    SendBulkEmailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendBulkEmailRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
