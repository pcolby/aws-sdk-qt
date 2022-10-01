// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCOMMANDREQUEST_H
#define QTAWS_SENDCOMMANDREQUEST_H

#include "qldbsessionrequest.h"

namespace QtAws {
namespace QldbSession {

class SendCommandRequestPrivate;

class QTAWSQLDBSESSION_EXPORT SendCommandRequest : public QldbSessionRequest {

public:
    SendCommandRequest(const SendCommandRequest &other);
    SendCommandRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendCommandRequest)

};

} // namespace QldbSession
} // namespace QtAws

#endif
