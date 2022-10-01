// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBHOOKSREQUEST_H
#define QTAWS_LISTWEBHOOKSREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class ListWebhooksRequestPrivate;

class QTAWSAMPLIFY_EXPORT ListWebhooksRequest : public AmplifyRequest {

public:
    ListWebhooksRequest(const ListWebhooksRequest &other);
    ListWebhooksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWebhooksRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
