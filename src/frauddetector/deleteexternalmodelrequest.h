// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXTERNALMODELREQUEST_H
#define QTAWS_DELETEEXTERNALMODELREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteExternalModelRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteExternalModelRequest : public FraudDetectorRequest {

public:
    DeleteExternalModelRequest(const DeleteExternalModelRequest &other);
    DeleteExternalModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExternalModelRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
