// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEUSERSTACKREQUEST_H
#define QTAWS_BATCHDISASSOCIATEUSERSTACKREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class BatchDisassociateUserStackRequestPrivate;

class QTAWSAPPSTREAM_EXPORT BatchDisassociateUserStackRequest : public AppStreamRequest {

public:
    BatchDisassociateUserStackRequest(const BatchDisassociateUserStackRequest &other);
    BatchDisassociateUserStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateUserStackRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
