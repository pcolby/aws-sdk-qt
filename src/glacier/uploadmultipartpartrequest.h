// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADMULTIPARTPARTREQUEST_H
#define QTAWS_UPLOADMULTIPARTPARTREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class UploadMultipartPartRequestPrivate;

class QTAWSGLACIER_EXPORT UploadMultipartPartRequest : public GlacierRequest {

public:
    UploadMultipartPartRequest(const UploadMultipartPartRequest &other);
    UploadMultipartPartRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadMultipartPartRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
