// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPLAUNCHREQUEST_H
#define QTAWS_STOPLAUNCHREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class StopLaunchRequestPrivate;

class QTAWSEVIDENTLY_EXPORT StopLaunchRequest : public EvidentlyRequest {

public:
    StopLaunchRequest(const StopLaunchRequest &other);
    StopLaunchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopLaunchRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
