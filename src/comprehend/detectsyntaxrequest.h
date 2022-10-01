// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSYNTAXREQUEST_H
#define QTAWS_DETECTSYNTAXREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectSyntaxRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DetectSyntaxRequest : public ComprehendRequest {

public:
    DetectSyntaxRequest(const DetectSyntaxRequest &other);
    DetectSyntaxRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectSyntaxRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
