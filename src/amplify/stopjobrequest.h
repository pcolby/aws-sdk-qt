// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPJOBREQUEST_H
#define QTAWS_STOPJOBREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class StopJobRequestPrivate;

class QTAWSAMPLIFY_EXPORT StopJobRequest : public AmplifyRequest {

public:
    StopJobRequest(const StopJobRequest &other);
    StopJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopJobRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
