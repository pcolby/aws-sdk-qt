// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDETECTORVERSIONREQUEST_H
#define QTAWS_DELETEDETECTORVERSIONREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteDetectorVersionRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteDetectorVersionRequest : public FraudDetectorRequest {

public:
    DeleteDetectorVersionRequest(const DeleteDetectorVersionRequest &other);
    DeleteDetectorVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDetectorVersionRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
