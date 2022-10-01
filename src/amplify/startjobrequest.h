// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTJOBREQUEST_H
#define QTAWS_STARTJOBREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class StartJobRequestPrivate;

class QTAWSAMPLIFY_EXPORT StartJobRequest : public AmplifyRequest {

public:
    StartJobRequest(const StartJobRequest &other);
    StartJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartJobRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
