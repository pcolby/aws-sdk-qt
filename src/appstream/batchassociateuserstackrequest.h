// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEUSERSTACKREQUEST_H
#define QTAWS_BATCHASSOCIATEUSERSTACKREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class BatchAssociateUserStackRequestPrivate;

class QTAWSAPPSTREAM_EXPORT BatchAssociateUserStackRequest : public AppStreamRequest {

public:
    BatchAssociateUserStackRequest(const BatchAssociateUserStackRequest &other);
    BatchAssociateUserStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAssociateUserStackRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
