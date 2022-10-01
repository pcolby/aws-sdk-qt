// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONREQUEST_H
#define QTAWS_STARTREPLICATIONREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class StartReplicationRequestPrivate;

class QTAWSMGN_EXPORT StartReplicationRequest : public MgnRequest {

public:
    StartReplicationRequest(const StartReplicationRequest &other);
    StartReplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReplicationRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
