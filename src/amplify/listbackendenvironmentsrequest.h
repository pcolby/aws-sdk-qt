// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKENDENVIRONMENTSREQUEST_H
#define QTAWS_LISTBACKENDENVIRONMENTSREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class ListBackendEnvironmentsRequestPrivate;

class QTAWSAMPLIFY_EXPORT ListBackendEnvironmentsRequest : public AmplifyRequest {

public:
    ListBackendEnvironmentsRequest(const ListBackendEnvironmentsRequest &other);
    ListBackendEnvironmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackendEnvironmentsRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
