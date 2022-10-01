// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONOUTPUTREQUEST_H
#define QTAWS_DELETEAPPLICATIONOUTPUTREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationOutputRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DeleteApplicationOutputRequest : public KinesisAnalyticsV2Request {

public:
    DeleteApplicationOutputRequest(const DeleteApplicationOutputRequest &other);
    DeleteApplicationOutputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationOutputRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
