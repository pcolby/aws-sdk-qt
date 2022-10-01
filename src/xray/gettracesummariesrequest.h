// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRACESUMMARIESREQUEST_H
#define QTAWS_GETTRACESUMMARIESREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetTraceSummariesRequestPrivate;

class QTAWSXRAY_EXPORT GetTraceSummariesRequest : public XRayRequest {

public:
    GetTraceSummariesRequest(const GetTraceSummariesRequest &other);
    GetTraceSummariesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTraceSummariesRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
