// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDELIVERYSTREAMREQUEST_H
#define QTAWS_DELETEDELIVERYSTREAMREQUEST_H

#include "firehoserequest.h"

namespace QtAws {
namespace Firehose {

class DeleteDeliveryStreamRequestPrivate;

class QTAWSFIREHOSE_EXPORT DeleteDeliveryStreamRequest : public FirehoseRequest {

public:
    DeleteDeliveryStreamRequest(const DeleteDeliveryStreamRequest &other);
    DeleteDeliveryStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
