// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEACCESSLOGSREQUEST_P_H
#define QTAWS_GENERATEACCESSLOGSREQUEST_P_H

#include "amplifyrequest_p.h"
#include "generateaccesslogsrequest.h"

namespace QtAws {
namespace Amplify {

class GenerateAccessLogsRequest;

class GenerateAccessLogsRequestPrivate : public AmplifyRequestPrivate {

public:
    GenerateAccessLogsRequestPrivate(const AmplifyRequest::Action action,
                                   GenerateAccessLogsRequest * const q);
    GenerateAccessLogsRequestPrivate(const GenerateAccessLogsRequestPrivate &other,
                                   GenerateAccessLogsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateAccessLogsRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
