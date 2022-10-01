// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETABLEREQUEST_H
#define QTAWS_DELETETABLEREQUEST_H

#include "timestreamwriterequest.h"

namespace QtAws {
namespace TimestreamWrite {

class DeleteTableRequestPrivate;

class QTAWSTIMESTREAMWRITE_EXPORT DeleteTableRequest : public TimestreamWriteRequest {

public:
    DeleteTableRequest(const DeleteTableRequest &other);
    DeleteTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTableRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
