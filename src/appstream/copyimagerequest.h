// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYIMAGEREQUEST_H
#define QTAWS_COPYIMAGEREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class CopyImageRequestPrivate;

class QTAWSAPPSTREAM_EXPORT CopyImageRequest : public AppStreamRequest {

public:
    CopyImageRequest(const CopyImageRequest &other);
    CopyImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyImageRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
