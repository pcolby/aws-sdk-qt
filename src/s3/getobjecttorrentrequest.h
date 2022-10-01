// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTTORRENTREQUEST_H
#define QTAWS_GETOBJECTTORRENTREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetObjectTorrentRequestPrivate;

class QTAWSS3_EXPORT GetObjectTorrentRequest : public S3Request {

public:
    GetObjectTorrentRequest(const GetObjectTorrentRequest &other);
    GetObjectTorrentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectTorrentRequest)

};

} // namespace S3
} // namespace QtAws

#endif
