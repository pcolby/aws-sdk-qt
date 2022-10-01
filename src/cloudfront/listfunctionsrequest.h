// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONSREQUEST_H
#define QTAWS_LISTFUNCTIONSREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListFunctionsRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListFunctionsRequest : public CloudFrontRequest {

public:
    ListFunctionsRequest(const ListFunctionsRequest &other);
    ListFunctionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
