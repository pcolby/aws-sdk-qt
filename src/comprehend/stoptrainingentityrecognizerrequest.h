// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRAININGENTITYRECOGNIZERREQUEST_H
#define QTAWS_STOPTRAININGENTITYRECOGNIZERREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StopTrainingEntityRecognizerRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StopTrainingEntityRecognizerRequest : public ComprehendRequest {

public:
    StopTrainingEntityRecognizerRequest(const StopTrainingEntityRecognizerRequest &other);
    StopTrainingEntityRecognizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTrainingEntityRecognizerRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
