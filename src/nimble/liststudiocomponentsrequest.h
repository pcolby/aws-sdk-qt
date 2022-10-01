// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOCOMPONENTSREQUEST_H
#define QTAWS_LISTSTUDIOCOMPONENTSREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class ListStudioComponentsRequestPrivate;

class QTAWSNIMBLE_EXPORT ListStudioComponentsRequest : public NimbleRequest {

public:
    ListStudioComponentsRequest(const ListStudioComponentsRequest &other);
    ListStudioComponentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStudioComponentsRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
