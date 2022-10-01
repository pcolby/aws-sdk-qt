// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRUMEVENTSREQUEST_H
#define QTAWS_PUTRUMEVENTSREQUEST_H

#include "rumrequest.h"

namespace QtAws {
namespace Rum {

class PutRumEventsRequestPrivate;

class QTAWSRUM_EXPORT PutRumEventsRequest : public RumRequest {

public:
    PutRumEventsRequest(const PutRumEventsRequest &other);
    PutRumEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRumEventsRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
