// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTDOMINANTLANGUAGEREQUEST_H
#define QTAWS_BATCHDETECTDOMINANTLANGUAGEREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectDominantLanguageRequestPrivate;

class QTAWSCOMPREHEND_EXPORT BatchDetectDominantLanguageRequest : public ComprehendRequest {

public:
    BatchDetectDominantLanguageRequest(const BatchDetectDominantLanguageRequest &other);
    BatchDetectDominantLanguageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDetectDominantLanguageRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
