// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRAININGDOCUMENTCLASSIFIERREQUEST_H
#define QTAWS_STOPTRAININGDOCUMENTCLASSIFIERREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StopTrainingDocumentClassifierRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StopTrainingDocumentClassifierRequest : public ComprehendRequest {

public:
    StopTrainingDocumentClassifierRequest(const StopTrainingDocumentClassifierRequest &other);
    StopTrainingDocumentClassifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTrainingDocumentClassifierRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
