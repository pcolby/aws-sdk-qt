// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETIMAGEREQUEST_H
#define QTAWS_BATCHGETIMAGEREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class BatchGetImageRequestPrivate;

class QTAWSECR_EXPORT BatchGetImageRequest : public EcrRequest {

public:
    BatchGetImageRequest(const BatchGetImageRequest &other);
    BatchGetImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetImageRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
