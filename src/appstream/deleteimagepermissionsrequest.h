// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEPERMISSIONSREQUEST_H
#define QTAWS_DELETEIMAGEPERMISSIONSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteImagePermissionsRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DeleteImagePermissionsRequest : public AppStreamRequest {

public:
    DeleteImagePermissionsRequest(const DeleteImagePermissionsRequest &other);
    DeleteImagePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImagePermissionsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
