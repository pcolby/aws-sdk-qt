// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLAUNCHREQUEST_H
#define QTAWS_STARTLAUNCHREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class StartLaunchRequestPrivate;

class QTAWSEVIDENTLY_EXPORT StartLaunchRequest : public EvidentlyRequest {

public:
    StartLaunchRequest(const StartLaunchRequest &other);
    StartLaunchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartLaunchRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
