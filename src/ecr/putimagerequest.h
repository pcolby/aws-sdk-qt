// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGEREQUEST_H
#define QTAWS_PUTIMAGEREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class PutImageRequestPrivate;

class QTAWSECR_EXPORT PutImageRequest : public EcrRequest {

public:
    PutImageRequest(const PutImageRequest &other);
    PutImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutImageRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
