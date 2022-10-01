// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEIMAGEREQUEST_H
#define QTAWS_BATCHDELETEIMAGEREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class BatchDeleteImageRequestPrivate;

class QTAWSECR_EXPORT BatchDeleteImageRequest : public EcrRequest {

public:
    BatchDeleteImageRequest(const BatchDeleteImageRequest &other);
    BatchDeleteImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteImageRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
