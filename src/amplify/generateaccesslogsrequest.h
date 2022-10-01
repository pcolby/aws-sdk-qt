// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEACCESSLOGSREQUEST_H
#define QTAWS_GENERATEACCESSLOGSREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class GenerateAccessLogsRequestPrivate;

class QTAWSAMPLIFY_EXPORT GenerateAccessLogsRequest : public AmplifyRequest {

public:
    GenerateAccessLogsRequest(const GenerateAccessLogsRequest &other);
    GenerateAccessLogsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateAccessLogsRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
