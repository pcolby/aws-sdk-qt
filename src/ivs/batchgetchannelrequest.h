// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCHANNELREQUEST_H
#define QTAWS_BATCHGETCHANNELREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class BatchGetChannelRequestPrivate;

class QTAWSIVS_EXPORT BatchGetChannelRequest : public IvsRequest {

public:
    BatchGetChannelRequest(const BatchGetChannelRequest &other);
    BatchGetChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetChannelRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
