// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SELECTOBJECTCONTENTREQUEST_H
#define QTAWS_SELECTOBJECTCONTENTREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class SelectObjectContentRequestPrivate;

class QTAWSS3_EXPORT SelectObjectContentRequest : public S3Request {

public:
    SelectObjectContentRequest(const SelectObjectContentRequest &other);
    SelectObjectContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SelectObjectContentRequest)

};

} // namespace S3
} // namespace QtAws

#endif
