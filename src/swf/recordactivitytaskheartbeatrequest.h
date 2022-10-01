// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECORDACTIVITYTASKHEARTBEATREQUEST_H
#define QTAWS_RECORDACTIVITYTASKHEARTBEATREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class RecordActivityTaskHeartbeatRequestPrivate;

class QTAWSSWF_EXPORT RecordActivityTaskHeartbeatRequest : public SwfRequest {

public:
    RecordActivityTaskHeartbeatRequest(const RecordActivityTaskHeartbeatRequest &other);
    RecordActivityTaskHeartbeatRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RecordActivityTaskHeartbeatRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
