// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITYTYPEREQUEST_H
#define QTAWS_DELETEENTITYTYPEREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEntityTypeRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteEntityTypeRequest : public FraudDetectorRequest {

public:
    DeleteEntityTypeRequest(const DeleteEntityTypeRequest &other);
    DeleteEntityTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEntityTypeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
