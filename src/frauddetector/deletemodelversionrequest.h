// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELVERSIONREQUEST_H
#define QTAWS_DELETEMODELVERSIONREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteModelVersionRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteModelVersionRequest : public FraudDetectorRequest {

public:
    DeleteModelVersionRequest(const DeleteModelVersionRequest &other);
    DeleteModelVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
