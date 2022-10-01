// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATABASEREQUEST_H
#define QTAWS_DESCRIBEDATABASEREQUEST_H

#include "timestreamwriterequest.h"

namespace QtAws {
namespace TimestreamWrite {

class DescribeDatabaseRequestPrivate;

class QTAWSTIMESTREAMWRITE_EXPORT DescribeDatabaseRequest : public TimestreamWriteRequest {

public:
    DescribeDatabaseRequest(const DescribeDatabaseRequest &other);
    DescribeDatabaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatabaseRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
