// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEREQUEST_H
#define QTAWS_DELETEIMAGEREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteImageRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DeleteImageRequest : public AppStreamRequest {

public:
    DeleteImageRequest(const DeleteImageRequest &other);
    DeleteImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImageRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
