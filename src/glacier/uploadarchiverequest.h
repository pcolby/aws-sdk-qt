// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADARCHIVEREQUEST_H
#define QTAWS_UPLOADARCHIVEREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class UploadArchiveRequestPrivate;

class QTAWSGLACIER_EXPORT UploadArchiveRequest : public GlacierRequest {

public:
    UploadArchiveRequest(const UploadArchiveRequest &other);
    UploadArchiveRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadArchiveRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
