// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMREQUEST_H
#define QTAWS_DESCRIBESTREAMREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeStreamRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT DescribeStreamRequest : public KinesisVideoRequest {

public:
    DescribeStreamRequest(const DescribeStreamRequest &other);
    DescribeStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStreamRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
