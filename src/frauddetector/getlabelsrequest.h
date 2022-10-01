// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLABELSREQUEST_H
#define QTAWS_GETLABELSREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetLabelsRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetLabelsRequest : public FraudDetectorRequest {

public:
    GetLabelsRequest(const GetLabelsRequest &other);
    GetLabelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLabelsRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
