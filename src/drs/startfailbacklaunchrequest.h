// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFAILBACKLAUNCHREQUEST_H
#define QTAWS_STARTFAILBACKLAUNCHREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class StartFailbackLaunchRequestPrivate;

class QTAWSDRS_EXPORT StartFailbackLaunchRequest : public DrsRequest {

public:
    StartFailbackLaunchRequest(const StartFailbackLaunchRequest &other);
    StartFailbackLaunchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFailbackLaunchRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
