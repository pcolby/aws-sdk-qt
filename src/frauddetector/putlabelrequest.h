// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLABELREQUEST_H
#define QTAWS_PUTLABELREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutLabelRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutLabelRequest : public FraudDetectorRequest {

public:
    PutLabelRequest(const PutLabelRequest &other);
    PutLabelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLabelRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
