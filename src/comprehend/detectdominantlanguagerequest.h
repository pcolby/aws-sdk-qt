// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTDOMINANTLANGUAGEREQUEST_H
#define QTAWS_DETECTDOMINANTLANGUAGEREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectDominantLanguageRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DetectDominantLanguageRequest : public ComprehendRequest {

public:
    DetectDominantLanguageRequest(const DetectDominantLanguageRequest &other);
    DetectDominantLanguageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectDominantLanguageRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
