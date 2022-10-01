// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTASKHEARTBEATREQUEST_H
#define QTAWS_SENDTASKHEARTBEATREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class SendTaskHeartbeatRequestPrivate;

class QTAWSSFN_EXPORT SendTaskHeartbeatRequest : public SfnRequest {

public:
    SendTaskHeartbeatRequest(const SendTaskHeartbeatRequest &other);
    SendTaskHeartbeatRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendTaskHeartbeatRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
