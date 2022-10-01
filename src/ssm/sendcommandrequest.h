// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCOMMANDREQUEST_H
#define QTAWS_SENDCOMMANDREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class SendCommandRequestPrivate;

class QTAWSSSM_EXPORT SendCommandRequest : public SsmRequest {

public:
    SendCommandRequest(const SendCommandRequest &other);
    SendCommandRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendCommandRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
