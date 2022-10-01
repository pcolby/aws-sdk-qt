// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFAILBACKREQUEST_H
#define QTAWS_STOPFAILBACKREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class StopFailbackRequestPrivate;

class QTAWSDRS_EXPORT StopFailbackRequest : public DrsRequest {

public:
    StopFailbackRequest(const StopFailbackRequest &other);
    StopFailbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopFailbackRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
