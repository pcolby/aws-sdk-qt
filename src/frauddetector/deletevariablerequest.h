// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVARIABLEREQUEST_H
#define QTAWS_DELETEVARIABLEREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteVariableRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteVariableRequest : public FraudDetectorRequest {

public:
    DeleteVariableRequest(const DeleteVariableRequest &other);
    DeleteVariableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVariableRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
