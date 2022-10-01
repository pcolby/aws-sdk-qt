// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTKEYPHRASESREQUEST_H
#define QTAWS_BATCHDETECTKEYPHRASESREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectKeyPhrasesRequestPrivate;

class QTAWSCOMPREHEND_EXPORT BatchDetectKeyPhrasesRequest : public ComprehendRequest {

public:
    BatchDetectKeyPhrasesRequest(const BatchDetectKeyPhrasesRequest &other);
    BatchDetectKeyPhrasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDetectKeyPhrasesRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
