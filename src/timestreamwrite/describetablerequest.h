// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLEREQUEST_H
#define QTAWS_DESCRIBETABLEREQUEST_H

#include "timestreamwriterequest.h"

namespace QtAws {
namespace TimestreamWrite {

class DescribeTableRequestPrivate;

class QTAWSTIMESTREAMWRITE_EXPORT DescribeTableRequest : public TimestreamWriteRequest {

public:
    DescribeTableRequest(const DescribeTableRequest &other);
    DescribeTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTableRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
