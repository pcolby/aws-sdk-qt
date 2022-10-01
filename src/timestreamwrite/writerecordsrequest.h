// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WRITERECORDSREQUEST_H
#define QTAWS_WRITERECORDSREQUEST_H

#include "timestreamwriterequest.h"

namespace QtAws {
namespace TimestreamWrite {

class WriteRecordsRequestPrivate;

class QTAWSTIMESTREAMWRITE_EXPORT WriteRecordsRequest : public TimestreamWriteRequest {

public:
    WriteRecordsRequest(const WriteRecordsRequest &other);
    WriteRecordsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WriteRecordsRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
