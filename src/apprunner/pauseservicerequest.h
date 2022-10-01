// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PAUSESERVICEREQUEST_H
#define QTAWS_PAUSESERVICEREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class PauseServiceRequestPrivate;

class QTAWSAPPRUNNER_EXPORT PauseServiceRequest : public AppRunnerRequest {

public:
    PauseServiceRequest(const PauseServiceRequest &other);
    PauseServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PauseServiceRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
