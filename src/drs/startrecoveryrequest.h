// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRECOVERYREQUEST_H
#define QTAWS_STARTRECOVERYREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class StartRecoveryRequestPrivate;

class QTAWSDRS_EXPORT StartRecoveryRequest : public DrsRequest {

public:
    StartRecoveryRequest(const StartRecoveryRequest &other);
    StartRecoveryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRecoveryRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
